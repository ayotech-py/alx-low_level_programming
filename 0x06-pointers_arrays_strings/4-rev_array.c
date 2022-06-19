#include "main.h"

/**
 * reverse_array - reverses an array
 * @a: array to be reversed
 * @n: size of the array
 */
void reverse_array(int *a, int n)
{
	int i;
	int tmp[];
	int j;

	i = 0;
	j = 0;

	while (a[i] != '\0')
	{
		tmp[i] = a[i];
		i++;
	}

	while (tmp[j] != '\0')
	{
		a[j] = tmp[n - 1];
		n--;
		j++;
	}
}
