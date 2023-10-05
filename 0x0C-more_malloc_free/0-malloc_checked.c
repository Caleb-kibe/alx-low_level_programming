#include "main.h"

/**
 * malloc_checked - checks if memory has been allocated
 * @b: parameter to allocate memory for
 * Return: pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *ptr;

	ptr = malloc(b);

	if (!ptr)
	{
		exit(98);
	}
	else
		return (ptr);
}
