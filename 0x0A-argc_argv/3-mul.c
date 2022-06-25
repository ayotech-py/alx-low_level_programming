#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two arguments
 * @argc: size of array
 * @argv: argv string
 *
 * Return: returns 1 and 0
 */
int main(int argc, char *argv[])
{
	if (argc > 2)
	{
		int mul;
		int a = strtol(argv[1], NULL, 10);
		int b = strtol(argv[2], NULL, 10);

		mul = a * b;
		printf("%d\n", mul);
	}
	else if (argc == 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
