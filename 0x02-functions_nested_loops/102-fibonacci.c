#include <stdio.h>

/**
 * main - Enry point
 *
 * Return: 0
 */
int main(void)
{
	long int a = 1, b = 2, iter = 50, temp;

	while (iter)
	{
		printf("%ld", a);

		temp = a;
		a = b;
		b = temp + a;

		if (iter != 1)
			printf(", ");

		iter--;
	}

	putchar('\n');

	return (0);
}
