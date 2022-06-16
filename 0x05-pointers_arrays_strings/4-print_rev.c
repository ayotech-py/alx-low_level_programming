#include "main.h"

/**
 * print_rev - Prints a string in reverse.
 * @s: The string to be printed.
 */
void print_rev(char *s)
{
	int i;
	int c;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	for (c = i; c != 0; c--)
		_putchar(s[c]);
	_putchar('\n');

}
