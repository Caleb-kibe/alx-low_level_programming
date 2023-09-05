#include "main.h"
#include <stdlib.h>

/**
  * str_concat - concatenates two strings
  * @s1: string 1
  * @s2: string 2
  * Return: pointer to a newly allocated space in memory
  */

char *str_concat(char *s1, char *s2)
{
	int s1len = 0, s2len = 0;
	int i;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0 ; s1[i] != '\0' ; i++)
		s1len++;
	for (i = 0 ; s2[i] != '\0' ; i++)
		s2len++;

	str = malloc(sizeof(char) * (s1len + s2len) + 1);

	if (str == NULL)
		return (NULL);

	for (i = 0 ; s1[i] != '\0' ; i++)
		str[i] = s1[i];
	for (i = 0 ; s2[i] != '\0' ; i++)
		str[s1len + i] = s2[i];

	return (str);
}
