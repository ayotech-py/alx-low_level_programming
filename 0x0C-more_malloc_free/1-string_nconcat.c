#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concanates two string
 * @s1: string 1
 * @s2: string 2
 * @n: n bytes
 * Return: Returns a pointer to the new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	int i = 0, x, y;

	for (i = 0; s1[i] != '\0'; i++)
	{
	}
	str = malloc((i + n + 1) * sizeof(char));

	for (x = 0; s1[x] != '\0'; x++)
	{
		str[x] = s1[x];
	}
	for (y = 0; y <= i; y++)
	{
		str[x + y] = s2[y];
	}
	return (str);
}
