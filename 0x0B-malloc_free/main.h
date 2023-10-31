#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>

int _get_n_words(char *str);
char *_memcpy(char *dest, char *src, int n);
int _putchar(char c);
char *_strcat(char *s1, char *s2);
char *_strdup(char *str);
int _strlen(const char *str);
int **alloc_grid(int width, int height);
char *argstostr(int ac, char **av);
char *create_array(unsigned int size, char c);
void free_grid(int **grid, int height);
char **strtow(char *str);

#endif /* MAIN_H */
