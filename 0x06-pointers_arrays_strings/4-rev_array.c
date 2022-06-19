#include "main.h"

/**
 * reverse_array - reverses an array
 * @a: array to be reversed
 * @n: size of the array
 */
void reverse_array(int *a, int n)
{
	int i;
	char tmp[n];

	i = 0;
	tmp = *a;

	while (i != '\0')
	{
		a[i] = tmp[n - 1];
		i++;
		n--;
	}
}
