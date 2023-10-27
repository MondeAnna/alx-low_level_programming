#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * main - entry point to show executable's name
 * @argc: unused count of cli arguments
 * @argv: cli arguments
 *
 * Return: EXIT_SUCCESS
 */
int main(int argc __attribute__ ((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (EXIT_SUCCESS);
}
