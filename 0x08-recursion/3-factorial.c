#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: number to do factial on
 * Return: factrial
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
