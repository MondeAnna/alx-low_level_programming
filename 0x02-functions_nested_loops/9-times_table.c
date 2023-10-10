#include "main.h"

/**
 * times_table - Show 9x9 multiplication table
 *
 * Return: void
 */
void times_table(void)
{
	const int ZERO = 0, NINE = 9, TEN = 10;
	int col, row, prod, tens, units;

	const char ZERO_CHAR = '0', SPACE = ' ', COMMA = ',';
	char tens_char, units_char;

	for (row = ZERO; row <= NINE; row++)
	{
		for (col = ZERO; col <= NINE; col++)
		{
			if (!col)
			{
				_putchar(ZERO_CHAR);
				_putchar(COMMA);
				continue;
			}

			prod = row * col;

			tens = prod / TEN;
			units = prod % TEN;

			tens_char = ZERO_CHAR + tens;
			units_char = ZERO_CHAR + units;

			_putchar(SPACE);

			if (prod <= 9)
				_putchar(SPACE);
			else
				_putchar(tens_char);

			_putchar(units_char);

			if (col != NINE)
				_putchar(COMMA);
		}
		_putchar('\n');
	}
}
