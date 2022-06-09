#include "main.h"

/**
 * more_numbers - 10times of numbers
 * Return: 0
 */
void more_numbers(void)
{
	int t, num;

	for (num = 0; num < 10; num++)
	{
		for (t = 0; t <= 14; t++)
		{
			if (t >= 10)
			{
				_putchar((t / 10) + '0');
			}
			_putchar((t % 10) + '0');
		}
		_putchar('\n');
	}
}
