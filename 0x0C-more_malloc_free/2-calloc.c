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

	str = calloc(nmemb, (size + 1));
	if (str == NULL)
		return (NULL);
	if (nmemb == 0 || size == 0)
		return (NULL);
	return (str);
}
