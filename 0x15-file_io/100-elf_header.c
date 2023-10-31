#include "main.h"

/**
 * _elf - Checks if ELF file.
 * @e_arr: pointer to an array containing ELF magic numbers.
 */
void _elf(unsigned char *e_arr)
{
	int i;

	for (i = 0; i < 4; i++)
	{
		if (e_arr[i] != 127 &&
				e_arr[i] != 'E' &&
				e_arr[i] != 'L' &&
				e_arr[i] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

/**
 * dis_magic - Prints magic numbers of ELF header.
 * @e_arr: pointer to an array containing ELF magic numbers.
 */
void dis_magic(unsigned char *e_arr)
{
	int i;

	printf("  Magic:   ");

	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x", e_arr[i]);

		if (i == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 * dis_class - Prints the class of an ELF header.
 * @e_arr: pointer to array containing ELF class.
 */
void dis_class(unsigned char *e_arr)
{
	printf("  Class:                             ");

	switch (e_arr[EI_CLASS])
	{
		case ELFCLASSNONE:
			printf("none\n");
			break;
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;
		default:
			printf("<unknown: %x>\n", e_arr[EI_CLASS]);
	}
}

/**
 * dis_data - Prints the data of ELF header.
 * @e_arr: pointer to an array containing ELF class.
 */
void dis_data(unsigned char *e_arr)
{
	printf("  Data:                              ");

	switch (e_arr[EI_DATA])
	{
		case ELFDATANONE:
			printf("none\n");
			break;
		case ELFDATA2LSB:
			printf("2's complement, little endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big endian\n");
			break;
		default:
			printf("<unknown: %x>\n", e_arr[EI_CLASS]);
	}
}

/**
 * dis_version - Prints the version of ELF header.
 * @e_arr: pointer to array containing ELF version.
 */
void dis_version(unsigned char *e_arr)
{
	printf("  Version:                           %d",
			e_arr[EI_VERSION]);

	switch (e_arr[EI_VERSION])
	{
		case EV_CURRENT:
			printf(" (current)\n");
			break;
		default:
			printf("\n");
			break;
	}
}

/**
 * dis_osabi - Prints OS/ABI of ELF header.
 * @e_arr: pointer to an array containing the ELF version.
 */
void dis_osabi(unsigned char *e_arr)
{
	printf("  OS/ABI:                            ");

	switch (e_arr[EI_OSABI])
	{
		case ELFOSABI_NONE:
			printf("UNIX - System V\n");
			break;
		case ELFOSABI_HPUX:
			printf("UNIX - HP-UX\n");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD\n");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - Linux\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris\n");
			break;
		case ELFOSABI_IRIX:
			printf("UNIX - IRIX\n");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX - FreeBSD\n");
			break;
		case ELFOSABI_TRU64:
			printf("UNIX - TRU64\n");
			break;
		case ELFOSABI_ARM:
			printf("ARM\n");
			break;
		case ELFOSABI_STANDALONE:
			printf("Standalone App\n");
			break;
		default:
			printf("<unknown: %x>\n", e_arr[EI_OSABI]);
	}
}

/**
 * dis_abi - Prints the ABI version
 * @e_arr: pointer to an array containing ELF ABI version.
 */
void dis_abi(unsigned char *e_arr)
{
	printf("  ABI Version:                       %d\n",
			e_arr[EI_ABIVERSION]);
}

/**
 * dis_type - Prints type of ELF header.
 * @e_type: ELF type.
 * @e_arr: pointer to array containing ELF class.
 */
void dis_type(unsigned int e_type, unsigned char *e_arr)
{
	if (e_arr[EI_DATA] == ELFDATA2MSB)
		e_type >>= 8;

	printf("  Type:                              ");

	switch (e_type)
	{
		case ET_NONE:
			printf("NONE (None)\n");
			break;
		case ET_REL:
			printf("REL (Relocatable file)\n");
			break;
		case ET_EXEC:
			printf("EXEC (Executable file)\n");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)\n");
			break;
		case ET_CORE:
			printf("CORE (Core file)\n");
			break;
		default:
			printf("<unknown: %x>\n", e_type);
	}
}

/**
 * dis_entry - Prints entry point of ELF header.
 * @e_entry: address of the ELF entry point.
 * @e_arr: pointer to array containing ELF class.
 */
void dis_entry(unsigned long int e_entry, unsigned char *e_arr)
{
	printf("  Entry point address:               ");

	if (e_arr[EI_DATA] == ELFDATA2MSB)
	{
		e_entry = ((e_entry << 8) & 0xFF00FF00) |
			((e_entry >> 8) & 0xFF00FF);
		e_entry = (e_entry << 16) | (e_entry >> 16);
	}

	if (e_arr[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)e_entry);

	else
		printf("%#lx\n", e_entry);
}

/**
 * close_elf - Closes an ELF file.
 * @elf: file descriptor
 */
void close_elf(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't close fd %d\n", elf);
		exit(98);
	}
}

/**
 * main - Displays the information contained in the ELF header
 * @argc: argument count
 * @argv: array of pointers to the arguments.
 * Return: 0 (successful)
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *header;
	int fo, fr;

	fo = open(argv[1], O_RDONLY);
	if (fo == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	header = malloc(sizeof(Elf64_Ehdr));
	if (header == NULL)
	{
		close_elf(fo);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	fr = read(fo, header, sizeof(Elf64_Ehdr));
	if (fr == -1)
	{
		free(header);
		close_elf(fo);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}

	_elf(header->e_arr);
	printf("ELF Header:\n");
	dis_magic(header->e_arr);
	dis_class(header->e_arr);
	dis_data(header->e_arr);
	dis_version(header->e_arr);
	dis_osabi(header->e_arr);
	dis_abi(header->e_arr);
	dis_type(header->e_type, header->e_arr);
	dis_entry(header->e_entry, header->e_arr);

	free(header);
	close_elf(fo);
	return (0);
}
