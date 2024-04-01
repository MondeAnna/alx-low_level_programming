#include "main.h"

/**
 * cmd_split - create array of arguemnts from user command
 * @cmd: command line input
 * @args: array of (to be) tokenised arguments
 * Return: array of user command (char **)
 */
char **cmd_split(char *cmd, char **args)
{
	int argc = n_char_occurances(cmd, ' ') + 1;
	int index = 0;
	char *arg;

	args = malloc(sizeof(*cmd) * argc);

	if (!args)
		exit(EXIT_FAILURE);

	arg = strtok(cmd, DELIMITERS);

	while (arg)
	{
		args[index++] = arg;
		arg = strtok(NULL, DELIMITERS);
	}

	args[index] = NULL;

	return (args);
}
