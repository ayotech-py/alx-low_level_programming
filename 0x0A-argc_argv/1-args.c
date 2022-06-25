#include <stdio.h>

/**
 * main - returns the number of arguments
 * @argc: argc size
 * @argv: argv string
 *
 * Return: Always 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
