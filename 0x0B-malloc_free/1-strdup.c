#include "main.h"
#include <stdlib.h>
/**
 * _strdup - duplicates a string
 * @str: string
 * Return: Returns pointer
 */

char *_strdup(char *str)
{
	int i, j;
	char *arr;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
	}
	arr = malloc((i + 1) * sizeof(char));
	if (arr == NULL)
		return (NULL);
	j = 0;
	while (str[j] != '\0')
	{
		arr[j] = str[j];
		j++;
	}
	return (arr);
}
