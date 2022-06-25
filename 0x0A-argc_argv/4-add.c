#include <stdio.h>
#include <stdlib.h>

/**
 * main - add positive numbers
 * @argc: array size
 * @argv: array vector
 * Return: return 0 or 1
 */
int main(int argc, char *argv[])
{
	int count;
	int add;

	if (argc > 1)
	{
		count = 1;

		while (count < argc)
		{
			if (atoi(argv[count]) < 0 || atoi(argv[count]) > 'a' || atoi(argv[count]) < 'z')
			{
				printf("Error\n");
				return (1);
				break;
			}
			else
			{
				add += atoi(argv[count]);
				count++;
			}
		}
		printf("%d\n", add);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
