#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: strung
 */
void puts_half(char *str)
{
	int c;
	int n;

	for (c = 0; str[c] != '\0'; c++)
	{
	}
	if ((c % 2) == 0)
	{
		for (n = c / 2; n < c; n++)
			_putchar(str[n]);
	}
	else
	{
		for (n = (c + 1) / 2; n < c; n++)
			_putchar(str[n]);
	}
	_putchar('\n');
}
