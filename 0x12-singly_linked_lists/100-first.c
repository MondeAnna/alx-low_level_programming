#include "lists.h"

/**
 * run_init - run before main
 *
 * Return: void
 */
void __attribute__ ((constructor)) run_init(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
