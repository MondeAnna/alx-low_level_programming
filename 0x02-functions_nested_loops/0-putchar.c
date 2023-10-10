#include <string.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	const char *string = "_putchar";
	char null_char = '\0';

	for (; *string != null_char; string++)
		_putchar(*string);
	_putchar('\n');

	return (0);
}
