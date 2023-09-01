#include "main.h"

/**
 * _isupper - function that checks for uppercase character
 * @c: function parameter
 * Return: 1 if successful 0 if unsuccessful
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
