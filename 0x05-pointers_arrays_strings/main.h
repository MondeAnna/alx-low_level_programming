#ifndef MAIN_H
#define MAIN_H

#include <assert.h>
#include <stdint.h>
#include <stdio.h>

int _atoi(char *s);
int _is_digit(int c);
int _is_zero(char *s);
int _putchar(char c);
void _puts(char *str);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
void print_array(int *a, int n);
void print_rev(char *s);
void puts2(char *str);
void puts_half(char *str);
void reset_to_98(int *n);
void rev_string(char *s);
void swap(char *a, char *b);
void swap_int(int *a, int *b);
void test_digits(void);
void test_with_characters(void);

#endif /* MAIN_H */
