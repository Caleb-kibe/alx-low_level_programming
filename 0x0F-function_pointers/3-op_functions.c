#include "3-calc.h"
#include <stdio.h>

/**
 * op_add - adds a and b
 * op_sub - subtracts a and b
 * op_mul - multiplies a and b
 * op_div - divides a and b
 * op_mod - returns the remainder of division of a and b
 * @a: parameter 1
 * @b: parameter 2
 * Return: Result of the operation
 */

int op_add(int a, int b)
{
	return (a + b);
}

int op_sub(int a, int b)
{
	return (a - b);
}
int op_mul(int a, int b)
{
	return (a * b);
}
int op_div(int a, int b)
{
	return (a / b);
}
int op_mod(int a, int b)
{
	return (a % b);
}
