#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <assert.h>

#define FALSE 0
#define TRUE 1

char *_get_last_char(char *s);
int _iterator(char *begin, char *end);
int _iterator_n(int num, int mod);
int _pow_recursion(int x, int y);
void _print_rev_recursion(char *s);
void _puts_recursion(char *s);
int _sqrt_iterator(int num, int div);
int _sqrt_recursion(int n);
int _strlen_recursion(char *s);
int factorial(int n);
int is_prime_number(int n);
int is_palindrome(char *s);

#endif /* MAIN_H */
