#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	int i;
	int s1length = 0;
	int s2length = 0;
	char *string;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0 ; s1[i] != '\0' ; i++)
		s1length++;
	for (i = 0 ; s2[i] != '\0' ; i++)
		s2length++;
	string = malloc(sizeof(char) * (s1length + s2length) + 1);

	if (string == NULL)
		return (NULL);
	for (i = 0 ; s1[i] != '\0' ; i++)
		string[i] = s1[i];
	for (i = 0 ; s2[i] != '\0' ; i++)
		string[s1length + i] = s2[i];
	return (string);
}
