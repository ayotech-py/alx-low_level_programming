#include "main.h"

/**
 * more_numbers - 10times of numbers
 * Return: 0
 */
void more_numbers(void)
{
	int t;
	int num;

	t = 0;

	while (t < 10)
	{
		for (num = 0; num <= 14; num++)
			_putchar((num % 10) + '0');
		_putchar('\n');
	}
	t++;
}
