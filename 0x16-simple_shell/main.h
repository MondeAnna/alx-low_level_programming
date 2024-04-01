#ifndef MAIN_H
#define MAIN_H

#include "_printf.h"

#include <stdio.h>

#define BUFFER 1024
#define DELIMITERS " \t\r\n\a"

char *cmd_get(void);
void prompt(void);
char **cmd_split(char *cmd, char **args);

#endif  /* MAIN_H */
