#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: character to check
 * Return: 1 if c is uppercase and 0 if c is otherwise
 */
int _isupper(int c)
{
	char c;

	if (c >= A && c >= Z)
		return (1);
	else
		return (0);
}
