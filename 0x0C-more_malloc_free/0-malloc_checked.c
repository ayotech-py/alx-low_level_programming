#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocate a memory
 * @b: size of memory
 * Return: 98 or a pointer to the memory
 */
void *malloc_checked(unsigned int b)
{
	char *str;
	str = malloc(b);
	return (str);
}
