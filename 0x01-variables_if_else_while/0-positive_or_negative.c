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
	int n;
	char *sign;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n)
		sign = n > 0 ? "positive" : "negative";
	else
		sign = "zero";

	printf("%d is %s\n", n, sign);

	return (0);
}
