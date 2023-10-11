#include "function_pointers.h"

/**
 * array_iterator - executes a function on each element of an array
 * @array: array holding the elements
 * @size: size of the array
 * @action: pointer to the function that will work on the elements
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	long unsigned int i;
	
	if (array == NULL || action == NULL)
		return;

	for (i = 0 ; i < size ; i++)
		action(array[i]);
}
