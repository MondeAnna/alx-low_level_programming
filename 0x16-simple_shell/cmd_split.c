#include "main.h"

/**
 * cmd_split - create array of arguemnts from user command
 * @cmd: command line input
 * Return: array of user command (char **)
 */
char **cmd_split(char *cmd)
{
	char **args;
	char *arg;
	int argc;

	int index = 0;

	argc = _n_chars(cmd, ' ') + NULL_BYTE;
	args = malloc(sizeof(*cmd) * argc);

	if (!args)
		exit(EXIT_FAILURE);

	arg = strtok(cmd, DELIMITERS);

	while (arg)
	{
		argc = _strlen(arg) + NULL_BYTE;
		args[index] = malloc(sizeof(*arg) * argc);
		args[index] = arg;
		arg = strtok(NULL, DELIMITERS);
		index++;
	}

	args[index] = NULL;

	return (args);
}
