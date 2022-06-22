#include "main.h"

/**
 * _strlen_recursion - cal the lenght of a string
 * @s: string
 * Return: Returns the length of the string
 */
int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s != '\0')
	{
		n++;
		return (n + _strlen_recursion(s + 1));
	}
}
