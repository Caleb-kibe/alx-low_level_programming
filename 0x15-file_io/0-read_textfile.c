#include "main.h"

/**
 * read_textfile - reads and prints a text file to the POSIX
 * standard output
 * @filename: name of the file
 * @letters: number of letters
 * Return: actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t fread, fwrite;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	fread = read(fd, buffer, letters);
	if (fread == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	fwrite = write(STDOUT_FILENO, buffer, fread);
	if (fwrite == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	close(fd);
	return (fread);
}
