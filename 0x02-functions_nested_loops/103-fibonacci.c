#include <stdio.h>

/**
 * main - Enry point
 *
 * Return: 0
 */
int main(void)
{
	const int MAX = 4000000;
	int a = 1, b = 2, temp = 0, total = 0;

	while (a <= MAX)
	{
		if (!(a % 2))
			total += a;

		temp = a;
		a = b;
		b = temp + a;
	}

	printf("%d\n", total);

	return (0);
}
