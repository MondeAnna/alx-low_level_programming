#include "main.h"

/**
 * run - application execution point
 * @environ: environment during execution
 * Return: EXIT_SUCCESS
 */
int run(char **environ)
{
	char **args = NULL;
	char *cmd;

	while (TRUE)
	{
		prompt();
		cmd = cmd_get();

		if (!cmd)
			exit(EXIT_FAILURE);

		args = cmd_split(cmd);
		cmd_exec(args, environ);

		free(args);
	}

	return (EXIT_SUCCESS);
}
