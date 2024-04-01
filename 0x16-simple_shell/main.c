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
	cmd_exec(args);

	free(args);

	return (EXIT_SUCCESS);
}
