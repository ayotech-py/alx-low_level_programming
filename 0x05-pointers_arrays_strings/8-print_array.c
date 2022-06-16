#include "main.h"

/**
 * print_array - Printing arrays
 * @a: array to consider
 * @n: array index
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= (n - 1); i++)
	{
		if (i == (n - 1))
			printf("%d", arr[i]);
		else
			printf("%d, ", arr[i]);
	}
	printf("\n");
}
