#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: stirng that contains the substring
 * @accept: substring
 * Return: returns i
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; accept[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (i == j)
				continue;
			else
				break;
		}
	}
	return (i + 1);
}

