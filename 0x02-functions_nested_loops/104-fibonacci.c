#include <stdio.h>

/**
 * main - Enry point
 *
 * Return: 0
 */
int main(void)
{
	long double  a = 1, b = 2, temp = 0;
	short int iter = 98;

	while (iter)
	{
		printf("%.0Lf", a);

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
