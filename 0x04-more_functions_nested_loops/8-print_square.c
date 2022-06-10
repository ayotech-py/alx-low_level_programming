#include "main.h"

/**
 * print_square - prints the size of square
 * @size: size of square
 */
void print_square(int size)
{
	int len;
	int bth;

	if (size > 0)
	{
		for (len = 0; len < size; len++)
		{
			for (bth = 0; bth < size; bth++)
				_putchar('#');
			_putchar('\n');
		}
	}
	_putchar('\n');
}
