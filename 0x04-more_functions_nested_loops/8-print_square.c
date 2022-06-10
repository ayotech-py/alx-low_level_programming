#include "main.h"

/**
 * print_square - prints the size of square
 * @size: size of square
 */
void print_square(int size)
{
	int len;
	int bth;

	len = 0;

	if (size > 0)
	{
		while (len < size)
		{
			for (bth = 0; bth < size; bth++)
				_putchar('#');
			_putchar('\n');
			len++;
		}
	}
	_putchar('\n');
}
