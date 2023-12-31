#ifndef VAR_FUNC_H
#define VAR_FUNC_H

#include <stdarg.h>
#include <stdio.h>

void print_all(const char * const format, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
int sum_them_all(const unsigned int n, ...);

#endif /* VAR_FUNC_H */
