#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * ensure_has - emplaces char with desired characteristic
 * @p: password
 * @l: lowerbound
 * @u: upperbound
 *
 * Return: 1 if True
 *	   0 if False
 */
int ensure_has(char *p, char l, char u)
{
	while (*p != '\0')
	{
		if ((l <= *p) && (*p <= u))
			return (1);
		p++;
	}
	return (0);
}

/**
 * main - decription
 *
 * Return: 0
 */
int main(void)
{
	int ascii_count = 128;
	int char_num = 8;
	int dgt, idx, rand_, lower, upper;
	char pass[9];

	srand(time(0));

	while (1)
	{
		dgt = ensure_has(pass, '0', '9');
		lower = ensure_has(pass, 'a', 'z');
		upper = ensure_has(pass, 'A', 'Z');

		if (dgt && lower && upper)
			break;

		idx = 0;

		while (idx < char_num)
		{
			rand_ = rand() % ascii_count;

			if (rand_ < 20 || rand_ > 126)
				continue;

			pass[idx] = (char) rand_;
			idx++;
		}

		pass[8] = '\0';
	}

	puts(pass);

	return (0);
}
