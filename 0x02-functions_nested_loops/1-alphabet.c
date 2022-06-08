/**
 * main - check the code
 *
 * Function -  for printing alphabet
 *
 * Return: Always 0.
 */

#include "main.h"

/**
 * print_alphabet - prints the all the alphabets in lowercase
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
