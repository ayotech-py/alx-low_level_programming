#include "main.h"

/**
 * _memcpy - copys a memory address
 * @dest: destination
 * @src: source
 * @n: bytes
 * Return: returns dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *ptrd = dest, *ptrs = src;

	for (i = 0; i < n; i++)
	{
		ptrd[i] = ptrs[i];
	}
	return (ptrd);
}
