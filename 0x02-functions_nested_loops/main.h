#ifndef _MAIN_H
#define _MAIN_H


/**
 * struct digits - int digit values of multiplicative
 * @hundreds: ramaining hundreds
 * @tens: remaining tens
 * @units: remaining units
 *
 * Description: Separate values for hundreds, tens and units
 */
struct digits
{
        int hundreds, tens, units;
};


/**
 * struct chars - char digit values of multiplicative
 * @hundreds: hundreds
 * @tens: tens
 * @units: units
 *
 * Description: Separate values for hundreds, tens and units
 */
struct chars
{
        char hundreds, tens, units;
};


int _abs(int);
int _isalpha(int);
int _islower(int);
int _putchar(char);
int add(int, int);
void jack_bauer(void);
void print_alphabet(void);
void print_alphabet_x10(void);
int print_last_digit(int);
int print_sign(int);
void print_times_table(int);
void print_to_98(int);
void times_table(void);


#endif /* _MAIN_H */
