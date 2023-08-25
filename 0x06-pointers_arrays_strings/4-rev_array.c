#include "main.h"

/**
  * reverse_array - reverses content of an array of integers
  * @a: array of integers parameter
  * @n: number of elements to swap
  * Return: void
  */

void reverse_array(int *a, int n)
{
	int i, j;

	for (i = 0 ; i < n-- ; i++)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
