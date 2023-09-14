#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - function that prints strings
 * @separator: the string to be printed between the strings
 * @n: number of strings passed to the function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *p;
	va_list list;

	va_start(list, n);

	for (i = 0 ; i < n ; i++)
	{
		p = va_arg(list, char *);

		if (!p)
			p = "nil";

				if (!separator)
				{
					printf("%s", p);
				}
				else if (separator && i == 0)
				{
					printf("%s", p);
				}
				else
				{
					printf("%s%s", separator, p);
				}
	}
	printf("\n");
	va_end(list);
}
