#include "main.h"

/**
 * leet - encode string using 1337
 * @str: string inquestion
 *
 * Return: encoded string (char *0
 */
char *leet(char *str)
{
	const char upper[] = "AEOLT";
	const char *lower = "aeolt";
	const char *digit = "43017";

	int len = sizeof(upper) / sizeof(char);
	char *root = str;
	int iter;


	while (*str != '\0')
	{
		for (iter = 0; iter < len; iter++)
			if ((*str == upper[iter]) || (*str == lower[iter]))
				*str = digit[iter];
		str++;
	}

	str = root;

	return (str);
}
