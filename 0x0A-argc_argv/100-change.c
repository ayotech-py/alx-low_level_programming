#include <stdio.h>
#include <stdlib.h>

/**
 * main - minimum number of coins to make change
 * for an amount of money
 * @argc: argument count
 * @argv: array of arguments
 *
 * Return: 1 if argument more than 1 or 0 otherwise
 */

int main(int argc, char *argv[])
{
	int cents, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("%d\n", 0);
		return (0);
	}

	while (cents > 0)
	{
		coins++;
		if (cents >= 25)
			cents -= 25;
		else if (cents >= 10)
			cents -= 10;
		else if (cents >= 5)
			cents -= 5;
		else if (cents >= 2)
			cents -= 2;
		else
			cents--;
	}
	printf("%d\n", coins);
	return (0);
}
