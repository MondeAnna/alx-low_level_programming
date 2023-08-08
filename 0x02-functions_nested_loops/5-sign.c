#include "main.h"

/**
 * print_sign - Print sign of a number
 * @n: Number who's sign is printed
 *
 * Description: Print + if n >= 1
 *		Print 0 in n == 0
 *		Print - if n <= -1
 *
 * Return: 1 if Positive
 *	   0 if Zero
 *	  -1 if Negative
 */
int print_sign(int n)
{
	short int value = 0;
	char sign = '0';

	if (n)
	{
		value = n >= 1 ? 1 : -1;
		sign = n >= 1 ? '+' : '-';
	}

	_putchar(sign);

	return (value);
}
