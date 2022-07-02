#include "main.h"
#include <stdlib.h>

int *array_range(int min, int max)
{
	int *arr;
	int i, j = 0, x = 0;

	if (min > max)
		return (NULL);

	i = min;
	while(i <= max)
	{
		j++;
		i++;
	}
	arr = malloc(sizeof(int) * j);
	if (arr == NULL)
		return (NULL);
	while (x <= j)
	{
		*(arr + x) = min;
		min++;
		x++;
	}
	return (arr);
}
