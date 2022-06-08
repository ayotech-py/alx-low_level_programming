#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the the alphabet in lowercase
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int count;

	count = 1;

	while (count <= 10)
	{
		char ch;

		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
		count++;
	}
}
