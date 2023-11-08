#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	short int digit = 48;
	short int nine = 57;
	short int comma = 44;
	short int space = 32;
	short int line_feed = 10;

	for (; digit <= nine; digit++)
	{
		putchar(digit);

		if (digit < nine)
		{
			putchar(comma);
			putchar(space);
		}
	}

	putchar(line_feed);

	return (0);
}
