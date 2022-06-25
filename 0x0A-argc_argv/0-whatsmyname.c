#include <stdio.h>

/**
 * main - print the name the file
 * @argc: argc sizse
 * @argv: argv string
 *
 * Return: Always
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
