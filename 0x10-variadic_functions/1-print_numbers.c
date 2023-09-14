#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - function that prints numbers, followed by a new line
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list values;

	va_start(values, n);

	for (i = 0 ; i < n ; i++)
	{
		if (!separator)
		{
			printf("%d", va_arg(values, int));
		}

		else if (separator && i == 0)
		{
			printf("%d", va_arg(values, int));
		}				
		else
		{
			printf("%s%d", separator, va_arg(values, int));
		}
	}
	va_end(values);
	printf("\n");
}
