#include "main.h"

/**
 * print_rev - Prints a string in reverse.
 * @s: The string to be printed.
 */
void print_rev(char *s)
{
	int i = 0;
	int j;

	while (s[j++])
		i++;

	for (j = i - 1; j >= 0; j--)
		_putchar(s[j]);

	_putchar('\n');
}
