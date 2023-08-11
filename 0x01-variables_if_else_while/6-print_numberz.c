#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	short int digit_as_char = 48;
	short int nine_as_char = 57;

	while (digit_as_char <= nine_as_char)
		putchar(digit_as_char++);
	putchar('\n');
	return (0);
}

