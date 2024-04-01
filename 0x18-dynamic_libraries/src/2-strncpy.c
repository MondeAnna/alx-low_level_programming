#include "main.h"

/**
 * _strncpy - copy n chars from a string to another
 * @dest: being copied to
 * @src: being copied from
 * @n: number of chars to be copied
 *
 * Description: Copies the string pointed to by
 * src, with up to at most n characters, including
 * the terminating null byte ('\0'), to the buffer
 * pointed to by dest
 *
 * The strings may not overlap (e.g.: dest == src
 * during call), and the destination string dest must
 * be large enough to receive the copy, else buffer
 * overruns are likely to occur
 *
 * If the length of src is less than n, the null byte
 * ('\0') is written to dest to ensure that a total of
 * n characters are written
 *
 * Warning: If there is no null byte among the first
 * n characters of src, the string placed in dest
 * will not be null-terminated
 *
 * Bugs: If dest is not large enough, behaviour is
 * undefined. Overflowing fixed-length string buffers
 * is a favorite cracker technique for taking complete
 * control of the machine. Any time a program reads or
 * copies data into a buffer, the program first needs
 * to check that there's enough space. This may be
 * unnecessary if you can show that overflow is
 * impossible, but be careful: programs can get changed
 * over time, in ways that may make the impossible
 * possible
 *
 * Description src: https://linux.die.net/man/3/strncpy
 *
 * Return: Pointer to @dest (char *)
 */
char *_strncpy(char *dest, char *src, int n)
{
	char null = '\0';
	int iter;

	for (iter = 0; iter < n; iter++)
	{
		dest[iter] = src[iter];

		if (src[iter] == null)
			break;
	}

	for (; iter < n; iter++)
		dest[iter] = '\0';

	return (dest);
}

/**
 * test_strncpy_len_equal_to_src - copy amount of chars src has
 *
 * Return: void
 */
void test_strncpy_len_equal_to_src(void)
{
	int len = 16, iter = 0;

	char *expected = "At the very END!";
	char dest[100] = "In the beginning...Man made Machine";
	char *src = "At the very END!";
	char *copy;

	copy = _strncpy(dest, src, len);

	for (; iter < len; iter++)
	{
		assert(copy[iter] == expected[iter]);
		assert(copy[iter] == dest[iter]);
	}
}
