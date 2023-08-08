#include "main.h"

/**
 * print_alphabet_x10 - Print lowercased alphabet 10 times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	short int iter;
	char a = 'a';
	char z = 'z';
	char letter;

	for (iter = 10; iter; iter--)
	{
		for (letter = a; letter <= z; letter++)
			_putchar(letter);
		_putchar('\n');
	}
}
