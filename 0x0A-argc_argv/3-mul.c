#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - entry point
 * @argc: n of args
 * @argv: values of args
 *
 * Return: EXIT_SUCCESS without error
 *	   1 with error
 */
int main(int argc, char **argv)
{
	int a, b;

	if (argc != 3)
	{
		puts("Error");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);

	printf("%d\n", a * b);

	return (EXIT_SUCCESS);
}
