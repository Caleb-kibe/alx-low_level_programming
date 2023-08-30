#include "main.h"

/**
  * is_prime_number - determines a prime number
  * @n: number being checked
  * Return: 1 if n is a prime number, 0 n is not a prime number
  */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
  * actual_prime - recursively determines if n is a prime number
  * @n: number being checked
  * @i: iterator
  * Return: 1 if n is a prime number, 0 n is not a prime number
  */

int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
