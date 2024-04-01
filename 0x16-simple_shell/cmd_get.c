#include "main.h"

/**
 * cmd_get - pull user input from command line
 * Return: array of strings
 */
char *cmd_get(void)
{
	/* set to ensure `getline` allocates memory */
	char *cmd = NULL;
	size_t len = 0;
	int n_char = 0;

	n_char = getline(&cmd, &len, stdin);

	if (n_char == EOF || !_strcmp(cmd, "exit\n"))
	{
		free(cmd);
		return (NULL);
	}

	return (cmd);
}
