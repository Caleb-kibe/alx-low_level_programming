#include "main.h"

/**
 * _strdup - copies string
 * @str: string to be copied
 * Return: poinrer to copied string
 */

char *_strdup(char *str)
{
	char *cpy;
	int counter = 0;
	int i;

	if (str == NULL)
		return (NULL);

	for (i = 0 ; str[i] != '\0' ; i++)
		counter++;

	cpy = malloc(sizeof(char) * counter + 1);

	if (cpy == NULL)
		return (NULL);

	for (i = 0 ; str[i] != '\0' ; i++)
		cpy[i] = str[i];

	return (cpy);


}
