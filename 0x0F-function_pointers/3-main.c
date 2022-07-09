#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - Prints the result of simple operations.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */

int main(int argc, char **argv)
{
	int res;
	char *op;

	op = argv[2];

	if (argc == 4)
	{
		if (((*op != '+') && (*op != '-') && (*op != '*'
						) && (*op != '/') && (*op != '%')) || (strlen(op) != 1))
		{
			printf("Error\n");
			exit(99);
		}
		if ((*op == '/' && atoi(argv[3]) == 0) || (*op == '%' && atoi(argv[3]) == 0))
		{
			printf("Error\n");
			exit(100);
		}
		res = (*get_op_func(argv[2]))(atoi(argv[1]), atoi(argv[3]));
		printf("%d\n", res);
	}
	else
	{
		printf("Error\n");
		exit(98);
	}
	return (0);
}
