#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Writes to Standard Error Stream
 * Return: Alwaays 1 (Failure)
 */
int main(void)
{
	char *err = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fprintf(stderr, "%s", err);
	return (1);
}
