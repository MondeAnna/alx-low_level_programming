#include "main.h"

/**
 * _strlen - get the length of a string
 * @s: string in question
 *
 * Return: Always 0.
 */
short int _strlen(char *s)
{
	short int i = 0;

	while (*s++)
		i++;

	return (i);
}

/**
 * create_file - create a file
 * @filename: name of file to be created
 * @text_content: content to be written to file
 *
 * Return: 1 on success, else -1 (int)
 */
int create_file(const char *filename, char *text_content)
{
	int file_descriptor;
	int exit_state;

	text_content = text_content ? text_content : STR_EMPTY;

	if (!filename)
		return (FILENAME_MISSING);

	file_descriptor = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);

	if (file_descriptor == CREATE_FAIL)
		return (CREATE_FAIL);

	exit_state = write(file_descriptor, text_content, _strlen(text_content));

	close(file_descriptor);

	return (exit_state == WRITE_FAIL ? WRITE_FAIL : WRITE_SUCCESS);
}
