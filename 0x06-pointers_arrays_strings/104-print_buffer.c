#include "main.h"

/**
 * _map_esc_to_period - replace escape sequences with period
 * @b: buffer
 * @index: starting point
 * @nchars: number of bytes to print
 *
 * Return: void
 */
void _map_esc_to_period(char *b, int index, int nchars)
{
	/* octal escape sequences and line feed*/
	const char esc_seq[] = {
		'\0', '\1', '\2', '\3', '\4',
		'\5', '\6', '\7', '\n',
	};

	int len = sizeof(esc_seq);
	int iter;

	for (; nchars; index++, nchars--)
		for (iter = 0; iter < len; iter++)
			if (b[index] == esc_seq[iter])
				b[index] = '.';
}

/**
 * _print_ascii_dec - print row's bytes in decimal
 * @b: buffer
 * @index: starting point
 * @nchars: number of bytes to print
 *
 * Return: void
 */
void _print_ascii_dec(char *b, int index, int nchars)
{
	putchar(' ');
	for (; nchars; index++, nchars--)
		printf("%c", b[index]);
}

/**
 * _print_ascii_hex - print row's bytes in hexadecimal
 * @b: buffer
 * @index: starting point
 * @nchars: number of bytes to print
 *
 * Return: void
 */
void _print_ascii_hex(char *b, int index, int nchars)
{
	int filler_nchars = 10 - nchars;

	for (; nchars; index++, nchars--)
	{
		if (index % 2 == 0)
			putchar(' ');
		printf("%.2x", b[index]);
	}

	if (filler_nchars)
		printf("  ");

	for (; filler_nchars; filler_nchars--)
		printf("  ");
}

/**
 * print_buffer - show values in buffer
 * @b: buffer
 * @size: buffer size
 *
 * Return: void
 */
void print_buffer(char *b, int size)
{
	int nchars = 10;
	int nrows = size / nchars;

	int row, index;


	nrows = size % 10 == 0 ? nrows : nrows + 1;

	for (row = 0; row < nrows; row++)
	{
		index = row * nchars;
		nchars = row < nrows - 1 ? nchars : size - index;

		/* 10 byte buffer index in hex */
		printf("%.8x:", index);

		_print_ascii_hex(b, index, nchars);
		_map_esc_to_period(b, index, nchars);
		_print_ascii_dec(b, index, nchars);

		putchar('\n');
	}
}






































