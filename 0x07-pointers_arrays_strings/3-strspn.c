#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: stirng that contains the substring
 * @accept: substring
 * Return: returns i
 */
unsigned int _strspn(char *s, char *accept)
{
	int byte = 0;
	int i;
	int j = 0;
	int c;

	for (i = 0; accept[i] != '\0'; i++)
	{
		if (accept[i] == s[0])
		{
			while (s[j] != ',')
			{
				for (c = 0; accept[c] != '\0'; c++)
				{
					if (accept[c] == s[j])
					{
						byte++;
						break;
					}
					else
						continue;
				}
				j++;
			}
			return (byte);
		}
	}
	return (0);
}
