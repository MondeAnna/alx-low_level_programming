#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>

int **alloc_grid(int width, int height);
char *_strdup(char *str);
int _strlen(const char *str);
char *create_array(unsigned int size, char c);
void free_grid(int **grid, int height);
char *str_concat(char *s1, char *s2);

#endif /* MAIN_H */
