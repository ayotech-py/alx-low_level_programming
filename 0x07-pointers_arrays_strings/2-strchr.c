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
	char *src = s, chr = c;

	for (i = 0; src[i] != '\0'; i++)
	{
		if (src[i] == chr)
		{
			return (src + i);
		}
	}
	return ('\0');
}
