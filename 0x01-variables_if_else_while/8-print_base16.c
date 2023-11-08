#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	const char *digits = "0123456789abcdef";
	const int SIZE = 16;
	int counter = 0;

	while (counter < SIZE)
		putchar(digits[counter++]);

	putchar('\n');

	return (0);
}
