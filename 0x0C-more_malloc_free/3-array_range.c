#include "main.h"
#include <stdlib.h>

/**
  * array_range - creates an array of integers
  * @min: minimum values stored
  * @max: maximum values stored
  * Return: the pointer to the newly created array
  */

int *array_range(int min, int max)
{
	int *ptr;
	int i;
	int output = 0;

	if (min > max)
		return (NULL);

	output = max - min + 1;

	ptr = malloc(sizeof(int) * output);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		ptr[i] = min++;

	return (ptr);
}

