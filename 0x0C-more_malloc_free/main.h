#ifndef MAIN_H
#define MAIN_H

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

void *_calloc(unsigned int nmemb, unsigned int size);
void *_memcpy(void *dest, void *src, unsigned int n);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
unsigned int _strlen(const char *str);
int *array_range(int min, int max);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);

#endif /* MAIN_H  */
