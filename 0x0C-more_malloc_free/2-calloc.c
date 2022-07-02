#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory
 * @nmemb: number
 * @size: size
 * Return: returns NULL and Pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *str;

	if (nmemb == 0 || size == 0)
		return (NULL);
	str = calloc(nmemb, size);
	if (str == NULL)
		return (NULL);
	return (str);
}
