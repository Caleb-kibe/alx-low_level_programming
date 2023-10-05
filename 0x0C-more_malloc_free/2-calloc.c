#include "main.h"

/**
 * _calloc - allocates memory for a array
 * @nmemb: number of members in the array
 * @size: array size
 * Return: pointer to the memory allocated to the array
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *result;

	if (nmemb == 0)
		return (NULL);
	if (size == 0)
		return (NULL);

	result = calloc(nmemb, size);

	if (result == NULL)
		return (NULL);
	else
		return (result);
}
