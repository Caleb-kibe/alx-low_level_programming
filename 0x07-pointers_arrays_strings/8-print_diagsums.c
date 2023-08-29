#include "main.h"
#include <stdio.h>
/**
  * print_diagsums - prints the sum of the two diagonals of square matrix
  * @a: input parameter
  * @size: input parameter
  * Return: void
  */

void print_diagsums(int *a, int size)
{
	int sum1, sum2;
	int z;

	sum1 = 0;
	sum2 = 0;

	for (z = 0 ; z < size ; z++)
	{
		sum1 = sum1 + a[z * size + z];
	}
	for (z = size - 1 ; z >= 0 ; z--)
	{
		sum2 += a[z * size + (size - z - 1)];
	}
	printf("%d, %d\n", sum1, sum2);
}
