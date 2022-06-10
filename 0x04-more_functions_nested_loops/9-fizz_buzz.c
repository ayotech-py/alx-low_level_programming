#include <stdio.h>

/**
 * main - FizzBuzz
 * Return: Always 0
 */
int main(void)
{
	int a = 1;

	for (a = 1; a <= 100; a++)
	{
		int mod1 = a % 3;
		int mod2 = a % 5;
		int mod3 = a % 15;

		if (mod3 == 0)
			printf("FizzBuzz ");
		else if (mod1 == 0)
			printf("Fizz ");
		else if (mod2 == 0)
			printf("Buzz ");
		else
			printf("%d ", a);
	}
	printf("\n");
}
