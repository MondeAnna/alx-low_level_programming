#ifndef MAIN_H
#define MAIN_H

#include <assert.h>

char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
int _strlen(char *s);
void test_strcat();
void test_strncat_len_greater_than_src(void);
void test_strncat_len_less_than_src(void);

#endif /* MAIN_H */
