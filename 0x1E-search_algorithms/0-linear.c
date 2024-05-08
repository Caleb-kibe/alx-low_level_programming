#include <stdio.h>
/**
 * linear_search - searches for a value in an array
 * of integers using linear search algorithm
 * @array: a pointer to the first element of the array
 * @size: the number of elements in the array
 * @value: value to search for
 * Return: the first index where value is located
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}

	if (i == size)
	{
		return (-1);
	}
	return (-1);
}
