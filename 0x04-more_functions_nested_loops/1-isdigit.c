#include "main.h"

/**
 * _isdigit - checks for a digit
 * @c: digit to be checked
 * Return: 1 if c is a digit and 0 if c is otherwise
 */
int _isdigit(int c)
{
	int d;

	for (d = 0; d <= 9; d++)
	{
		if (c == d)
			return (1);
		else
			return (0);
	}
}
