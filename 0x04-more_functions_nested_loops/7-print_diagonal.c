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
		while (t < n)
		{
			_putchar('\\');
			_putchar('\n);
			for (s = 0; s < t; s++)
			{
				_putchar(' ');
			}
			t++;
		}
	}
	_putchar('\n');
}
