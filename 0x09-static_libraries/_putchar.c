#include <unistd.h>

/**
 * _putchar - write character to stdout
 * @c: character in question
 *
 * Return: 1 on success, else -1 with errno set (int)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
