#include "main.h"

/**
 * _strchr - find a charactre
 * @s: string to check
 * @c: character
 * Return: return a pointer pointing to the char
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}
