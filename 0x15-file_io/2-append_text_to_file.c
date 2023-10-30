#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file to append text to
 * @text_content: the text to append
 * Return: 1 (success), -1 (fail)
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, fwrite;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	fwrite = write(fd, text_content, strlen(text_content));

	if (fwrite == -1 || fwrite != strlen(text_content))
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
