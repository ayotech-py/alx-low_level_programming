#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creating an array
 * @size: size of array
 * @c: char in teh array
 * Return: Returns a pointer and null
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	arr = malloc(size * sizeof(char));
	if (*arr)
	{
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		arr[i] = c;
		i++;
	}
	arr[i] = '\0';
	return (arr);
}
