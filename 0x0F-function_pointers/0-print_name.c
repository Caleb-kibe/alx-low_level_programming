#include <stdio.h>
#include "function_pointers.h"

/**
  * print_name - function that prints name
  * @name: the string to be printed
  * @f: pointer to the function print_name
  */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
