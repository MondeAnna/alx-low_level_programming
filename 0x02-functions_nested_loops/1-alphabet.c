#include "main.h"

/**
 * print_alphabet - Print lowercased alphabet
 *
 * Return: void
 */
void print_alphabet(void)
{
	char letter = 'a';
	char z = 'z';

	for (; letter <= z; letter++)
		_putchar(letter);
	_putchar('\n');
}
