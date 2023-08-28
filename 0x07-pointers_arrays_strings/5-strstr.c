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

/**
 * exec - test entry point
 *
 * Return: void
 */
void exec(void)
{
	char *h = "hello, world";
	char *w = "world";

	char *a = "assist in assasination";
	char *b = "assasin";

	char *c = "some stuff";
	char *n = "things";

	char *r;
	int bool_;

	r = _strstr(h, w);
	bool_ = r == &h[7];
	printf("\nIs world true:\t\t%d\n", bool_);

	r = _strstr(a, b);
	bool_ = r == &a[10];
	printf("Is assisin true:\t%d\n", bool_);

	r = _strstr(c, n);
	bool_ = r == NULL;
	printf("Is things null (nil):\t%d\n", bool_);

	printf("\nHaystack:\t\t%s\n", _strstr("this", ""));
	printf("Empty:\t%s\n", _strstr("", ""));
}
