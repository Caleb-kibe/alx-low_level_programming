#include "main.h"

/**
 * malloc_checked - checks if memory has been allocated
 * @b: parameter to allocate memory for
 * Return: pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *ptr;

	ptr = malloc(sizeof(int));

	if (ptr == NULL)
		exit(98);

	*ptr = b;

	return (ptr);
}
