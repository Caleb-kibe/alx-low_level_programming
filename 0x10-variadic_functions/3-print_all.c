#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - function that prints anything
 * @format: list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{

	int i = 0;
	char *p, *t = "";

	va_list list;

	va_start(list, format);

		if (format)
		{
			while (format[i])
			{
				switch (format[i])
				{
					case 'c':
						printf("%s%c", t, va_arg(list, int));
						break;
					case 'i':
						printf("%s%d", t, va_arg(list, int));
						break;
					case 'f':
						printf("%s%f", t, va_arg(list, double));
						break;
					case 's':
						p = va_arg(list, char *);
						if (!p)
							p = "(nil)";
						printf("%s%s\n", t, p);
						break;
					default:
						i++;
						continue;
				}
				t = " ,";
				i++;
			}
		}
}
