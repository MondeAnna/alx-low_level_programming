#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter = 'a';
	char z = 'z';

	while (letter <= z)
	{
		putchar(letter++);

		if (letter == 'e' || letter == 'q')
			letter++;
	}

	putchar('\n');

	return (0);
}
