#include "main.h"

/**
  * _memcpy - function that copies memory area
  * @dest: memory destination
  * @src: memory source
  * @n: number of bytes
  * Return: copied memory destination
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int t = 0;
	int i = n;

	for (; t < i ; t++)
	{
		dest[t] = src[t];
		n--;
	}
	return (dest);
}
