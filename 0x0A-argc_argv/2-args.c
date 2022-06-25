#include <stdio.h>

/**
 * main - prints all the argument received
 * @argc: string size
 * @argv: string
 *
 * Return: always zero
 */
int main(int argc, char *argv[])
{
	int count = 0;

	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}
	return (0);
}
