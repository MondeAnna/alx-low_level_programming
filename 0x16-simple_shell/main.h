#ifndef MAIN_H
#define MAIN_H

#include "_printf.h"

#include <stdio.h>
#include <sys/wait.h>

#define BUFFER 1024
#define CHILD_PROCESS_FAIL -1
#define CHILD_PROCESS_SUCCESS 0
#define DELIMITERS " \t\r\n\a"
#define NULL_BYTE 1
#define TRUE 1

pid_t cmd_exec(char **input, char **environ);
char *cmd_get(void);
char **cmd_split(char *cmd);
void prompt(void);
int run(char **environ);

#endif  /* MAIN_H */
