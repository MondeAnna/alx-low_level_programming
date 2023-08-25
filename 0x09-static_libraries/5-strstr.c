#include "main.h"

/**
 * _strstr - find sub-string
 * @haystack: parent string
 * @needle: child string
 *
 * Return: point to start of sub-string (char *)
 */
char *_strstr(char *haystack, char *needle)
{
	char *h = haystack;
	char *n = needle;

	if (!(*n))
		return (haystack);

	while (*h)
	{
		if (!(*n))
			break;

		if (*h++ == *n)
			n++;
		else
		{
			haystack = h;
			n = needle;
		}
	}

	return (*haystack == *needle ? haystack : NULL);
}
