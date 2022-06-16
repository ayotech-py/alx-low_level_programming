#include "main.h"

/**
 * rev_string - prints string in reverse
 * @s: string
 */
void rev_string(char *s)
{
	int i;
	int c;
	char *str;
	char temp;

	str = s;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	for (c = i - 1; c != -1; c--)
	{
		temp = *(str + i);
		*(str + i) = *(str + (i - 1));
		*(str + (i - 1)) = temp;
	}
}
