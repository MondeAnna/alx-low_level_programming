#include "main.h"

/**
 * mul - multiply two positive numbers
 * @num1: left operand
 * @num2: right operand
 *
 * Return: positive number (unsigned long int)
 */
void mul(unsigned long int num1, unsigned long int num2)
{
	printf("%ld\n", num1 * num2);
}

/**
 * check_is_digit - check if string is made up of digits
 * @operand: string in question
 *
 * Return: void
 */
void check_is_digit(char *operand)
{
	while (*operand)
		if (!isdigit(*operand++))
		{
			puts("Error");
			exit(98);
		}
}

/**
 * main - entry
 * @argc: cli arg count
 * @argv: cli arg values
 *
 * Return: 0 on success, else 98 (int)
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		puts("Error");
		exit(98);
	}

	check_is_digit(argv[1]);
	check_is_digit(argv[2]);

	mul(atoi(argv[1]), atoi(argv[2]));

	return (0);
}
