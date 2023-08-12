#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	short int line_feed = 10, comma = 44, space = 32;
	short int zero = 48, nine = 57;
	int i, j, k, l;

	for (i = zero; i <= nine; i++)
	{
		for (j = zero; j <= nine; j++)
		{
			for (k = zero; k <= nine; k++)
			{
				for (l = zero; l <= nine; l++)
				{
					if (i > k || j > l)
						continue;

					if ((i == k) && (j == l))
						continue;

					putchar(i);
					putchar(j);

					putchar(space);

					putchar(k);
					putchar(l);

					if (i == nine && j == nine - 1)
						continue;

					putchar(comma);
					putchar(space);
				}
			}
		}
	}

	putchar(line_feed);

	return (0);
}
