#include "main.h"

/**
 * create_file - creates a file
 * @filename: the name of the file
 * @text_content: NULL terminated string to write on the file
 * Return: 1 on success, -1 on failure and if filename is NULL
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int letters;
	int fwrite;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	for (letters = 0; text_content[letters]; letters++)
		;

	fwrite = write(fd, text_content, letters);

	if (fwrite == -1)
		return (-1);

	close(fd);
	return (1);
}
