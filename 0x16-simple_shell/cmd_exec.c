#include "main.h"

/**
 * cmd_exec - create subprocess to run user call
 * @args: tokenized command line input
 * Return: process id (pid_t)
 */
pid_t cmd_exec(char **args)
{
	pid_t process_id = fork();

	if (process_id == CHILD_PROCESS_FAIL)
		return (process_id);

	if (process_id == CHILD_PROCESS_SUCCESS)
	{
		char *env[] = {NULL};

		execve(args[0], args, env);

		perror(args[0]);

		return (process_id);
	}

	wait(NULL);

	return (process_id);
}
