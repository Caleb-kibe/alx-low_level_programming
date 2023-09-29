#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 1 if argument is not a number
 */

int main(int argc, char *argv[])
{
	int i = 0, j, num;
	unsigned int sum = 0;
	char *c;

	if (argc <= 1)
		printf("0\n");

	num = atoi(argv[i]);
	for (j = 1 ; j < argc ; j++)
	{
		c = argv[i];
		for (j = 0 ; j < strlen(c) ; c++)
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
	}
}
