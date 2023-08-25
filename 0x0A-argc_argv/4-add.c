#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: n of args
 * @argv: values of args
 *
 * Return: 0 without error
 *	   1 with error
 */
int main(int argc, char **argv)
{
	int result = 0;
	char *curr_ptr;

	while (argc-- > 1)
	{
		++argv;
		curr_ptr = *argv;

		while (*curr_ptr)
		{
			if (!isdigit(*curr_ptr))
			{
				puts("Error");
				return (1);
			}

			curr_ptr++;
		}

		result += atoi(*argv);
	}

	printf("%d\n", result);

	return (0);
}
