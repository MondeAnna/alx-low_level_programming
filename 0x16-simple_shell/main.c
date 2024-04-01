#include "main.h"

/**
 * main - entry point
 * Return: EXIT_SUCCESS
 */
int main(void)
{
	char *cmd;

	prompt();
	cmd = cmd_get();

	if (!cmd)
		exit(EXIT_FAILURE);

	_printf(cmd);

	free(cmd);

	return (EXIT_SUCCESS);
}
