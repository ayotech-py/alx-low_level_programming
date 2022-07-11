#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - prints the strings passed as parameters to the function
 * @separator: separates the strings
 * @n: number of strings passed to the functions
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;

	va_list ptr;

	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(ptr, char *);

		if (str == NULL)
		{
			printf("nil");
		}
		else
		{
			printf("%s", str);
		}
		if (separator != NULL && i != (n - i))
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(ptr);
}
