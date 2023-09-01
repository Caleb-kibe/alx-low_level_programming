#include "main.h"

/**
 * _isdigit - function that checks for digit 0 to 9
 * @c: function parameter
 * Return: 1 (successful) 0 (unsuccessful)
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
