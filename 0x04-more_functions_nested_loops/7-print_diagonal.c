#include "main.h"

/**
 * print_diagonal - prints diagonal lines
 * @n: number of times
 * Return: Always 0
 */
void print_diagonal(int n)
{
	int t;
	int s;

	if (n > 0)
	{
		for (t = 0; t < n; t++)
		{
			for (s = 0; s < t; s++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			if (t == n - 1)
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
