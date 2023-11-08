#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	const int UNIT_MOD = 10;
	int remainder;
	int n;

	char *greater_than_5 = "greater than 5";
	char *less_than_6 = "less than 6 and not 0";
	char *descriptor;

	srand(time(0));

	n = rand() - RAND_MAX / 2;
	remainder = n % UNIT_MOD;

	if (!remainder)
		descriptor = "0";
	else
		descriptor = remainder > 5 ? greater_than_5 : less_than_6;

	printf("Last digit of %d is %d and is %s\n", n, remainder, descriptor);
	return (0);
}
