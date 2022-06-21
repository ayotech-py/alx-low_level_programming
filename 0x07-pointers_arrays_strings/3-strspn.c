#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: stirng that contains the substring
 * @accept: substring
 * Return: returns i
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	int j = 0;

	for (i = 0; accept[i] != '\0'; i++, j++)
	{
		if (accept[i] == s[j])
			continue;
		else
			break;
	}
	return (i);
}

