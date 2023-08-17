#include "main.h"

/**
 * more_numbers - show 10 rows of digits
 *		  ranging 0 to 14
 *
 * Return: void
 */
void more_numbers(void)
{
	const char ZERO = '0', ONE = '1';
	int col, row;

	for (row = 0; row <= 9; row++)
	{
		for (col = 0; col <= 14; col++)
		{
			if (col >= 10)
				_putchar(ONE);
			_putchar(ZERO + col % 10);
		}
		_putchar('\n');
	}
}
