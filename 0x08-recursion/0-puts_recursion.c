#include "main.h"

/**
 * _puts_recursion - prints the character of a sting
 * @s: sting to print
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
