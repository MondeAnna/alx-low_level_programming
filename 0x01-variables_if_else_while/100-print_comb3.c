#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	short int zero = 48;
	short int nine = 57;
	short int comma = 44;
	short int space = 32;
	short int line_feed = 10;

	int i;
	int j;

	for (i = zero; i <= nine; i++)
	{
		for (j = zero; j <= nine; j++)
		{
			if (i >= j)
				continue;

			putchar(i);
			putchar(j);

			if (i == nine - 1 && j == nine)
				continue;

			putchar(comma);
			putchar(space);
		}
	}

	putchar(line_feed);

	return (0);
}
