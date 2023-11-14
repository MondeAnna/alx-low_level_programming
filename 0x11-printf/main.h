#ifndef MAIN_H
#define MAIN_H

#define DESCRIPTOR 1
#define EXIT_FAIL -1
#define ONE 1

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * struct print - spec-func map
 * @spec: specifier
 * @va_func: function
 *
 * Description: map of char spec to va list
 * parse and print function
 */
typedef struct print {
	char spec;
	int (*va_func)(va_list *args);
} print_t;

int (*get_print(char spec))(va_list *args);

int _printf(const char *format, ...);
int _putchar(char c);
int _strlen(char *str);

int helper_int(int num, const int base);
int helper_uint(unsigned int num, const unsigned int base);

int va_char(va_list *args);
int va_bin(va_list *args);
int va_int(va_list *args);
int va_str(va_list *args);

#endif /* MAIN_H */
