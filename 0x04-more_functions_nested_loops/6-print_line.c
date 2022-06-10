#include "main.h"

/**
 * print_line - prints a line on the terminal
 * @n: number of lines
 * Return: Always 0
 */
void print_line(int n)
{
	int t;

	if (n > 0)
	{
		for (t = 0; t < n; t++)
			_putchar('_');
	}
	_putchar('\n');
}
