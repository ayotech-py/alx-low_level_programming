#include "main.h"
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
		while (s1[i] != '\0')
			i++;
		arr = malloc((i + 1) * sizeof(char));
		for (x = 0; s1[x] != '\0'; x++)
			arr[x] = s1[x];
		return (arr);
	}

	else if (s2 == NULL)
	{
		while (s2[i] != '\0')
			i++;
		arr = malloc((i + 1) * sizeof(char));
		for (x = 0; s2[x] != '\0'; x++)
			arr[x] = s2[x];
		return (arr);
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
