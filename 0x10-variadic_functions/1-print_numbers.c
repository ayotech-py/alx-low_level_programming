#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>
/**
 * print_numbers - prints the numbers passed as parameter to the function
 * with a separator
 * @separator: the separator that separates the numbers
 * @n: number of parameters passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list ptr;

	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ptr, int));
		if ((i != (n - 1)) && (separator != NULL))
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(ptr);
}
