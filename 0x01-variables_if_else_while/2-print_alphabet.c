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
		putchar(letter++);
	putchar('\n');

	return (0);
}
