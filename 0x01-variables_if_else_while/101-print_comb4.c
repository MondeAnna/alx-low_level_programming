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
	int k;

	for (i = zero; i <= nine; i++)
	{
		for (j = zero; j <= nine; j++)
		{
			for (k = zero; k <= nine; k++)
			{
				if (i >= j || i >= k || j >= k)
					continue;

				putchar(i);
				putchar(j);
				putchar(k);

				if (i == nine - 2 && j == nine - 1)
					continue;

				putchar(comma);
				putchar(space);
			}
		}
	}

	putchar(line_feed);

	return (0);
}
