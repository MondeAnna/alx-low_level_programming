#include "function_pointers.h"

/**
 * print_name - show name
 * @name: name in question
 * @f: func pointer printing name
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (f)
		f(name);
}
