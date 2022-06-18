#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: string 1
 * @src: string 2
 * @n: bytes
 * Return: returns dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int count = 0;

	while (count < n)
	{
		*(dest + count) = *(src + count);
		if (*(src + count) == '\0')
			break;
		count++;
	}
	return (dest);
}
