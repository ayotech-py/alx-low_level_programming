#include "main.h"

/**
 * _strpbrk - searches for a char in a string
 * @s: string to search
 * @accept: char
 * Return: returns a pointer or null:
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (accept[0] == s[i])
		{
			return (s + i);
		}
	}
	return ('\0');
}
