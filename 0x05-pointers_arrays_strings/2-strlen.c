#include "main.h"

/**
 * _strlen - check the code
 * @s: string to consider
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (*s++)
		i++;
	return (i);
}
