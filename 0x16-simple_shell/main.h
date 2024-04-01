#ifndef MAIN_H
#define MAIN_H

#include "_printf.h"

#include <stdio.h>
#include <sys/wait.h>

#define BUFFER 1024
#define CHILD_PROCESS_FAIL -1
#define CHILD_PROCESS_SUCCESS 0
#define DELIMITERS " \t\r\n\a"

pid_t cmd_exec(char **input);
char *cmd_get(void);
char **cmd_split(char *cmd, char **args);
void prompt(void);

#endif  /* MAIN_H */
