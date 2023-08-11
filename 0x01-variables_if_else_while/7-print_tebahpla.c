#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter = 'z';
	char a = 'a';

	while (letter >= a)
		putchar(letter--);
	putchar('\n');

	return (0);
}
