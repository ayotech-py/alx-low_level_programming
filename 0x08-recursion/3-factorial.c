#include "main.h"

/**
 * factorial - finds the factorial of an integer
 * @n: number
 * Return: returns the factorial of the number
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
