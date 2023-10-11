#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array holding the elements
 * @size: size of the array
 * @cmp: function pointer to the function that checks for integer
 * Return: index of the first element for the cmp function does not return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);

	if (size <= 0)
		return (-1);

	for (i = 0 ; i < size ; i++)
	{
		if (cmp(array[i]))
		return (i);
	}
	return(-1);
}
