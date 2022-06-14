#include "main.h"

/**
 * _strlen - check the code
 * @s: string to consider
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int i;
	int j;

	while (i = 0)
	{
		while (j = 0)
		{
			s[i] = j;
			if (s[i] == '\\0')
				i = 1;
			else
				continue;
		}
	}
	return (j);
}
