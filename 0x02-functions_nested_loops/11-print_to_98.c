#include <stdio.h>

/**
 * print_to_98 - Show integers from n to 98
 * @n: Starting value
 *
 * Descriptions: Shows values linearly fron
 *		 n to 98
 *               Both n and 98 are inclusive
 *		 Increments where n < 90
 *		 Decrements where n > 90
 *		 Remains where n == 90
 *
 * Return: 0
 */
void print_to_98(int n)
{
	const int NINETY_EIGHT = 98, TRUE = 1;

	while (TRUE)
	{
		printf("%d", n);

		if (n != NINETY_EIGHT)
			printf(", ");

		if (n > NINETY_EIGHT)
			n--;
		else if (n < NINETY_EIGHT)
			n++;
		else
			break;
	}
	putchar('\n');
}
