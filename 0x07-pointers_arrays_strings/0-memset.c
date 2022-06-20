#include "main.h"

/**
 * _memset - functions that fills a buffer
 * @b: what to fill
 * @n: bytes
 * @s: points to a memory
 * Return: Returns the pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *m = s, v = b;

	i = 0;
	for (i = 0; i <= n; i++)
	{
		m[i] = v;
	}
	return (m);
}
