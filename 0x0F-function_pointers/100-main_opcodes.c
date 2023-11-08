#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - entry point
 * @argc: number of cli arguments
 * @argv: cli arguments
 *
 * Description: show hexidecimal operation codes
 *
 * Return: EXIT_SUCCESS on success
 *         1 for incorrect argc
 *         2 for negative number_of_bytes
 */
int main(int argc, char **argv)
{
	unsigned char *address;
	char *err = "Error";
	int number_of_bytes, index;

	if (argc != 2)
	{
		puts(err);
		exit(1);
	}

	number_of_bytes = atoi(argv[1]);

	if (number_of_bytes < 0)
	{
		puts(err);
		exit(2);
	}

	address = (unsigned char *) main;

	for (index = 0; index < number_of_bytes; index++)
		printf("%.02x ", address[index]);

	putchar('\n');

	return (EXIT_SUCCESS);
}
