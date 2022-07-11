#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - sum up all the parameters passed to the variadi function
 * @n: number of parameters passed to the function
 * Return: returns the sum of all the parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int num;
	int sum = 0;

	va_list ptr;

	va_start(ptr, n);

	for (num = 0; num < n; num++)
	{
		sum = sum + va_arg(ptr, int);
	}
	va_end(ptr);

	return (sum);
}
