#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	short int num = 0;
	short int nine = 9;

	while (num <= nine)
		printf("%d", num++);
	putchar('\n');

	return (0);
}
