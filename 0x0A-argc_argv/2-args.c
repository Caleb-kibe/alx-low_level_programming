#include <stdio.h>

/**
  * main - main function
  * @argc: arguement count
  * @argv: arguement vector
  * Return: 0 (seccess)
  */

int main(int argc, char *argv[])
{
	int count;

	for (count = 0 ; count < argc ; count++)
	{
		printf("%s\n", argv[count]);
	}
	return (0);
}
