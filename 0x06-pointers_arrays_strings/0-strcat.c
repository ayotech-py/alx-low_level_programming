#include "main.h"
#include <stdio.h>

/**
 * _strcat - syrings
 * @dest: first strubg
 * @src: second strinh
 */
char *_strcat(char *dest, char *src)
{
	int i, c;

	i = 0;
	while (dest[i] != '\0')
		i++;

	for (c = 0; src[c] != '\0'; c++, i++)
		dest[i] = src[c];
	return (dest);
