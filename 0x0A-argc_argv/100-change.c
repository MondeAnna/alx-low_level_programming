#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: n of args
 * @argv: values of args
 *
 * Return: EXIT_SUCCESS without error
 *	   1 with error
 */
int main(int argc, char *argv[])
{
	int cents = 0, coins = 0, iter = 0, n_denom = 4;
	int denoms[] = {25, 10, 5, 2};

	if (argc != 2)
	{
		puts("Error");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents > 0)
	{
		for (; iter < n_denom; iter++)
		{
			coins += cents / denoms[iter];
			cents %= denoms[iter];
		}

		coins += cents;
	}

	printf("%d\n", coins);

	return (EXIT_SUCCESS);
}
