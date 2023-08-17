#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	int mod3, mod5, iter;

	for (iter = 1; iter <= 100; iter++)
	{
		mod3 = iter % 3 == 0;
		mod5 = iter % 5 == 0;

		if (mod3 && mod5)
			printf("FizzBuzz");
		else if (mod3)
			printf("Fizz");
		else if (mod5)
			printf("Buzz");
		else
			printf("%d", iter);

		if (iter < 100)
			putchar(' ');
	}

	putchar('\n');

	return (0);
}
