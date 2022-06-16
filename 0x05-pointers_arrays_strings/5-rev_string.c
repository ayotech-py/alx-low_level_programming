#include "main.h"

void rev_string(char *s)
{
	int i;
	int c;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	for (c = i - 1; c != -1; c--)
		_putchar(s[c]);
	_putchar('\n');
}
