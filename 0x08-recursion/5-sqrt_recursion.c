#include "main.h"

/**
  * _sqrt_recursion - returns the natural square root of a number
  * @n: value to find the squareroot
  * Return: squareroot
  */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt(n, 0));
}

/**
  * _sqrt - function that finds the squareroot of a number
  * @n: number to calculate its squareroot
  * @i: iterator
  * Return: squareroot
  */

int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
		return (-1);
	if (sqrt == n)
		return (i);
	return (_sqrt(n, i + 1));
}
