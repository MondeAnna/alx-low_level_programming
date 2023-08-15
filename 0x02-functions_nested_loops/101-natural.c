#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	const int MAX = 1024;
	int iter = 0, total = 0;

	for (; iter < MAX; iter++)
		if (!(iter % 3) || !(iter % 5))
			total += iter;

	printf("%d\n", total);

	return (0);
}
