#include "main.h"

/**
 * _power - func calculates (base ^ power)
 * @base: exponent base
 * @power: exponent power
 * Return: value of (base ^ power)
 */
unsigned long int _power(unsigned int base, unsigned int power)
{
	unsigned long int numb;
	unsigned int i;

	numb = 1;
	for (i = 1; i <= power; i++)
		numb *= base;
	return (numb);
}

/**
 * print_binary - prints a number in binary notation
 * @n: number to print
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int div, check;
	char f;

	f = 0;
	div = _power(2, sizeof(unsigned long int) * 8 - 1);
	while (div != 0)
	{
		check = n & div;
		if (check == div)
		{
			f = 1;
			_putchar('1');
		}
		else if (f == 1 || div == 1)
		{
			_putchar('0');
		}
		div >>= 1;
	}
}

