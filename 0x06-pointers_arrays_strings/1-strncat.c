#include "main.h"

/**
 * _strncat - Function that copies a string
 * @dest: first string
 * @src: second string
 * @n: n bytes
 * Return: returns dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int count;
	int count2;

	count = 0;
	count2 = 0;
	n = 0;

	while (dest[count + 1] != '\0')
	{
		count++;
	}

	while (count2 <= n)
	{
		dest[count] = src[count2];
		count++;
		count2++;
	}
	return (dest);
}


