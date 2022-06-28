#include "main.h"
googoogoo
#include <stdlib.h>
/**
 * str_concat - concanates 2 strings
 * @s1: string 1
 * @s2: string 2
 * Return: returns a pointer
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, x, y;
	char *arr;

	i = 0;
	j = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}

	else if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	arr = malloc((i + j + 1) * sizeof(char));
	if (arr == NULL)
		return (NULL);
	for (x = 0; s1[x] != '\0'; x++)
		arr[x] = s1[x];
	for (y = 0; s2[y] != '\0'; y++)
		arr[x + y] = s2[y];
	return (arr);
}
