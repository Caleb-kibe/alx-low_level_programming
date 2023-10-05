#include "main.h"

/**
 * array_range - creates an array of integers
 * @max: highest integer value
 * @min: lowest integer value
 * Return: pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int i;
	int *array;
	int size = 0;

	size = max - min + 1;

	if (min > max)
		return (NULL);

	array = malloc(sizeof(int) * size);

	if (array == NULL)
		return (NULL);

	for (i = 0 ; i < size ; i++)
		array[i] = min + i;
	return (array);
}
