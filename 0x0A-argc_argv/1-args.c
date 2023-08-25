#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: n of args
 * @argv: values for args
 *
 * Return: EXIT_SUCCESS
 */
int main(int argc, char *argv[] __attribute__ ((unused)))
{
	printf("%d\n", argc - 1);
	return (EXIT_SUCCESS);
}
