#include "main.h"
#include <stdlib.h>

/**
 * _memset - fills memory with a constant byte
 * @str: memory pointer
 * @c: character to be copied
 * @n: number of times to copy
 * Return: pointer to the memory
 */
char *_memset(char *str, char c, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		str[i] = c;
	}

	return (str);
}

/**
 * _calloc - allocates memory for an array, using calloc
 * @nmemb: elements number
 * @size: element size
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, nmemb * size);

	return (ptr);
}

