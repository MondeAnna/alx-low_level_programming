#include "main.h"

/**
 * _get_n_words - get number of whitespace separated words
 * @str: string being operated on
 *
 * Return: number of words (int)
 */
int _get_n_words(char *str)
{
	int n = 0;

	while (*str)
	{
		if (str[0] == ' ' && str[1] != ' ' && str[1] != '\0')
			n++;
		str++;
	}

	return (n);
}

/**
 * _memcpy - copy memory area
 * @dest: destination memory
 * @src: source memory
 * @n: memory size to copy
 *
 * Description: project does not seem to be bothered
 * with checking for memory overlap due to declaring
 * dest and src with explicity memory sizes
 *
 * Return: destination memory (char *)
 */
char *_memcpy(char *dest, char *src, int n)
{
	while (n--)
		dest[n] = src[n];
	return (dest);
}

/**
 * _strlen - get length of string
 * @str: string in question
 *
 * Return: length of string (int)
 */
int _strlen(const char *str)
{
	unsigned int len = 0;

	while (*str++)
		len++;

	return (++len);
}

/**
 * strtow - split string into words
 * @str: string in question
 *
 * Return: pointer to array of words (char **)
 */
char **strtow(char *str)
{
	int iter_str = 0, iter_n_words = 0, len, n_words, size;
	char **words;
	char *word, *tracker;

	if (!str || !(*str))
		return (NULL);

	len = _strlen(str);
	n_words = _get_n_words(str);
	words = malloc((sizeof(char *) * n_words) + 1);
	if (!words)
		return (NULL);

	for (; iter_str < len; iter_str++)
	{
		if (str[iter_str] == '\0')
			break;
		else if (str[iter_str] == ' ')
			continue;

		tracker = str += iter_str;
		len -= iter_str;
		size = iter_str = 0;

		while (*tracker && *tracker != ' ')
		{
			tracker++;
			size++;
		}

		word = malloc((sizeof(char) * size) + 1);
		if (!word)
			return (NULL);
		_memcpy(word, str, size);
		str += size;
		word[size] = '\0';
		words[iter_n_words++] = word;
	}
	words[n_words] = NULL;
	return (words);
}
