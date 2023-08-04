#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lowerA = 'a';
	char lowerZ = 'z';
	char upperA = 'A';
	char upperZ = 'Z';

	char letter = lowerA;
	char end = lowerZ;

	while (letter <= end)
	{
		putchar(letter++);

		if (letter > lowerZ)
		{
			letter = upperA;
			end = upperZ;
		}
	}

	putchar('\n');

	return (0);
}
