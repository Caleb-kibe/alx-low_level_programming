#include "main.h"

/**
 * create_file - creates a file
 * @filename: the name of the file
 * @text_content: NULL terminated string to write on the file
 * Return: 1 on success, -1 on failure and if filename is NULL
 */

int create_file(const char *filename, char *text_content)
{
	int file;
	int output = 1, count = 0;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file == -1)
		return (-1);
	if (text_content)
	{
		while (text_content[count])
			count++;
		output = write(file, text_content, count);
	}
	if (output == -1)
		return (-1);
	close(file);
	return (-1);
}
