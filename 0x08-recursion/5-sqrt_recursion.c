#include "main.h"

/**
 * _sqrt_recursion - returns the actual square root of n
 * @n: number
 * Return: square root of n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrt_recursion(n, 0));
}

/**
 * sqrt_recursion - recurses to find the square root of n
 * @n: the number
 * @j: iterator
 * Return: square root
 */

int sqrt_recursion(int n, int j)
{
	if (j * j > n)
		return (-1);
	if (j * j == n)
		return (j);
	return (sqrt_recursion(n, j + 1));
}
