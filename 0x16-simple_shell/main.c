#include "main.h"

/**
 * main - entry point
 * Return: EXIT_SUCCESS
 */
int main(void)
{
	char **args = NULL;
	char *cmd;

	prompt();
	cmd = cmd_get();

	if (!cmd)
		exit(EXIT_FAILURE);

	cmd_split(cmd, args);

	_printf("%s\n", cmd);

	free(cmd);

	return (EXIT_SUCCESS);
}
