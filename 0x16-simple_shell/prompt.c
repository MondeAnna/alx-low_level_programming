#include "main.h"

/**
 * prompt - await user input
 * Return: void
 */
void prompt(void)
{
	char *login = NULL;
	char host[BUFFER];
	char cwd[BUFFER];

	login = getlogin();

	if (!login)
		login = "root";

	gethostname(host, sizeof(host));
	getcwd(cwd, sizeof(cwd));

	_printf("%s@%s:%s$ ", login, host, cwd);
}
