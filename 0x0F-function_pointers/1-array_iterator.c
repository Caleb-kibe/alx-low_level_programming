#include "function_pointers.h"
#include <stdio.h>

/**
  * array_iterator - function that iterates over an array
  * @array: the array of integers
  * @size: the size of the array
  * @action: function that executes a function given as a parameter on each element of an array
  */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	long unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0 ; i < size ; i++)
		action(array[i]);
}