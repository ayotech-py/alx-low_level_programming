#include "main.h"
#include <stdlib.h>

char *str_concat(char *s1, char *s2)
{
	int i, j, x, y;
	char *arr;

	i = 0;
	j = 0;
	while(s1[i] != '\0')
		i++;
	while(s2[j] != '\0')
		j++;
	arr = malloc((i + j) * sizeof(char));
	if (arr == NULL)
		return (NULL);
	for (x = 0; s1[x] != '\0'; x++)
		arr[x] = s1[x];
	for (y = 0; s2[y] != '\0'; y++)
		arr[x + y] = s2[y];
	return (arr);
}
