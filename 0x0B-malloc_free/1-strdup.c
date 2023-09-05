#include "main.h"
#include <stdlib.h>

/**
  * _strdup - concatenates two strings
  * @str: string to be duplicated
  * Return: pointer to the duplicated string
  */

char *_strdup(char *str)
{
	int i;
	int count;
	char *cpy;

	if (str == NULL)
		return (NULL);

	count = 0;
	for (i = 0 ; str[i] != '\0' ; i++)
		count++;

	cpy = malloc(sizeof(char) * count + 1);

	if (cpy == NULL)
		return (NULL);

	for (i = 0 ; str[i] != '\0' ; i++)
		cpy[i] = str[i];
	return (cpy);
}
