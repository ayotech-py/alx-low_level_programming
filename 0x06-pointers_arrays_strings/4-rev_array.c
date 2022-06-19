#include "main.h"

/**
 * reverse_array - reverses an array
 * @a: array to be reversed
 * @n: size of the array
 */
void reverse_array(int *a, int n)
{
	int i;

	i = 0;

	while (i != '\0')
	{
		a[n - 1] = a[i];
		_putchar(a[i]);
		i++;
		n--;
	}
}
