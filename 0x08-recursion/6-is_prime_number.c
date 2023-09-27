#include "main.h"

/**
 * is_prime_number - function that determines a prime number
 * @n: the number
 * Return: 1 if prime and 0 if not
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime(n, n - 1));
}

/**
 * prime - function that recursively find a prime number
 * @n: number
 * @j: iterator
 * Return: 1 if prime && 0 if not
 */

int prime(int n, int j)
{
	if (j == 1)
		return (1);
	if (j > 0 && n % j == 0)
		return (0);
	return (prime(n, j - 1));
}
