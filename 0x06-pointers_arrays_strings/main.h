#ifndef MAIN_H
#define MAIN_H

#include <assert.h>
#include <stdio.h>

int _islower(int c);
int _islwr(const char *c);
int _isseparator(const char c);
int _isuppr(const char *c);
void _map_esc_to_period(char *b, int index, int nchars);
void _print_ascii_dec(char *b, int index, int nchars);
void _print_ascii_hex(char *b, int index, int nchars);
int _putchar(char c);
void _rotate(char *c);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
char *_strncpy(char *dest, char *src, int n);
int _strlen(char *s);
char *cap_string(char *str);
char *infinite_add(char *n1, char *n2, char *r, int size_r);
char *leet(char *str);
void print_buffer(char *b, int size);
void print_number(int n);
void reverse_array(int *a, int n);
char *rot13(char *str);
char *string_toupper(char *str);
void swap(int *a, int *b);
void test_cap_string_special_char(void);
void test_cap_string_whitespace(void);
void test_leet_consonants(void);
void test_leet_vowels(void);
void test_strcat();
void test_strncat_len_greater_than_src(void);
void test_strncat_len_less_than_src(void);
void test_strcmp_equal_char_len(void);
void test_strcmp_variadic_char_len(void);
void test_strncpy_len_equal_to_src(void);
void test_strncpy_len_greater_than_src(void);
void test_strncpy_len_less_than_src(void);

#endif /* MAIN_H */
