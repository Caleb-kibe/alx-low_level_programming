#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 1 if no argument is passed
 */

int main(int argc, char *argv[])
{
	int num1, num2;
	int mul = 0;

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	mul = num1 * num2;

	if (argc == 3)
	{
		printf("%d\n", mul);
	}

	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
