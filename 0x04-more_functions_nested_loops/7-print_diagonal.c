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

	t = 0;

	if (n > 0)
	{
		while (t < n)
		{
			for (s = 0; s < t; s++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
			t++;
		}
	}
	_putchar('\n');
}
