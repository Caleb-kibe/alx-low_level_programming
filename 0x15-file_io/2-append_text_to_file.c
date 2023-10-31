#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file to append text to
 * @text_content: the text to append
 * Return: 1 (success), -1 (fail)
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int letters;
	int fwrite;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (letters = 0; text_content[letters]; letters++)
			;
		fwrite = write(fd, text_content, letters);

		if (fwrite == -1)
			return (-1);
	}

	close(fd);
	return (1);
}
