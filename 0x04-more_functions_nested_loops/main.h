#ifndef MAIN_H
#define MAIN_H


/**
 * struct first_digit - first digit and it's exponent of ten
 * @digit: the value
 * @exponent_of_ten: used to multiple digit
 */
struct first_digit
{
	int digit;
	int exponent_of_ten;
};


int _isdigit(int c);
int _isupper(int c);
int _putchar(char c);
int base_ten_exponent(int n);
struct first_digit get_first_digit(int n);
long int get_largest_prime(long int n);
void more_numbers(void);
int mul(int a, int b);
void print_diagonal(int n);
void print_line(int n);
void print_most_numbers(void);
void print_number(int n);
void print_numbers(void);
void print_square(int size);
void print_triangle(int size);
void test_get_largest_prime(void);


#endif /* MAIN_H */
