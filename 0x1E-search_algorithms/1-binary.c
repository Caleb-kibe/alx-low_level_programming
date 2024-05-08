#include <stdio.h>
/**
 * print_array - prints an array
 * @array: the array to print
 * @size: the bumber of elements in the array
 */
void print_array(int *array, size_t size)
{
	size_t i;

	printf("Searching in array: ");
	for (i = 0; i < size; i++)
	{
		printf("%d", array[i]);
		if (i < size - 1)
			printf(", ");
	}
	printf("\n");
}
/**
 * binary_search - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: a pointer to the first element of the array
 * @size: number of elements in the array
 * @value: the value to search for
 * Return: index where value is located,
 * -1 if array is NULL or value not present
 */
int binary_search(int *array, size_t size, int value)
{
	size_t l = 0;
	size_t r = size - 1;
	size_t mid;

	if (array == NULL)
		return (-1);

	while (l <= r)
	{
		mid = (l + r) / 2;

		print_array(array + l, r - l + 1);

		if (value == array[mid])
			return (mid);

		else if (value > array[mid])
			l = mid + 1;

		else
			r = mid - 1;
	}
	return (-1);
}
