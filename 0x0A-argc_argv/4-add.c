#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 1 if argument is not a number
 */

int main(int argc, char *argv[])
{
	int i = 0, j, num;
	int sum = 0;

	if (argc <= 1)
		printf("0\n");

	num = atoi(argv[i]);
	for (j = 0 ; j < argc ; j++)
	{
		if (j == 'a' || j == 'Z')
		{
			printf("Error\n");
			return (1);
		}

		else
		{
			sum = sum + num;
			printf("%d\n", sum);
			return (sum);
		}
	}
	return (0);
}
