#include "main.h"

/**
 * swap_int - check the code
 * @a: integer a
 * @b: integer b
 *
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int n = *a;
	*a = *b;
	*b = n;
}
