#include "main.h"


/**
 * get_digits - Extract digits from arg
 * @n: arg being processed
 *
 * Return: digits (struct)
 */
struct digits get_digits(int n)
{
	const int HUNDRED = 100, TEN = 10;
	struct digits d;

	d.hundreds = n / HUNDRED;
	d.tens = (n % HUNDRED) / TEN;
	d.units = n % TEN;

	return (d);
}


/**
 * make_chars - Extract digits from arg
 * @d: digits being transformed
 *
 * Return: digits (struct)
 */
struct chars make_chars(struct digits d)
{
	const char ZERO = '0';
	struct chars c;

	c.hundreds = ZERO + d.hundreds;
	c.tens = ZERO + d.tens;
	c.units = ZERO + d.units;

	return (c);
}


/**
 * print_cell - Show each value as own 'cell'
 * @d: digits struct with values to display
 * @c: char struct with values being displayed
 *
 * Return: void
 */
void print_cell(struct digits d, struct chars c)
{
	const char SPACE = ' ';

	_putchar(SPACE);

	if (d.hundreds)
		_putchar(c.hundreds);
	else
		_putchar(SPACE);

	if (d.hundreds || d.tens)
		_putchar(c.tens);
	else
		_putchar(SPACE);

	_putchar(c.units);
}



/**
 * print_times_table - Show nxn multiplication table
 * @n: Square's dimensions
 *
 * Description: nxn table when n in range (0, 15)
 *
 * Return: void
 */
void print_times_table(int n)
{
	const char COMMA = ',', LINE_FEED = '\n', ZERO_CHAR = '0';
	const int ZERO = 0;
	struct digits d;
	struct chars c;

	int col, row, prod;

	if ((n < 0) || (n > 15))
		return;

	if (!n)
	{
		_putchar(ZERO_CHAR);
		_putchar(LINE_FEED);
		return;
	}

	for (row = ZERO; row <= n; row++)
	{
		for (col = ZERO; col <= n; col++)
		{
			if (!col)
			{
				_putchar(ZERO_CHAR);
				_putchar(COMMA);
				continue;
			}

			prod = row * col;

			d = get_digits(prod);
			c = make_chars(d);

			print_cell(d, c);

			if (col != n)
				_putchar(COMMA);
		}
		_putchar(LINE_FEED);
	}
}
