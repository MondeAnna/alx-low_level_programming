#include "3-calc.h"

/**
 * op_add - sum two values
 * @a: left operand
 * @b: right operand
 *
 * Return: sum (int)
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - difference of two values
 * @a: left operand
 * @b: right operand
 *
 * Return: difference (int)
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mod - divisional remainder of two values
 * @a: left operand
 * @b: right operand
 *
 * Return: divisional remainder (int)
 */
int op_mod(int a, int b)
{
	return (a % b);
}

/**
 * op_div - division of two values
 * @a: left operand
 * @b: right operand
 *
 * Return: division (int)
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mul - product of two values
 * @a: left operand
 * @b: right operand
 *
 * Return: product (int)
 */
int op_mul(int a, int b)
{
	return (a * b);
}
