#include <stdlib.h>
#include <stdio.h>

/**
 * main - entry point
 * @argc: n args
 * @argv: values of args
 *
 * Return: EXIT_SUCCESS
 */
int main(int argc, char **argv)
{
	while (argc--)
		puts(*argv++);
	return (EXIT_SUCCESS);
}
