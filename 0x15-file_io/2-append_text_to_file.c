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
 * append_text_to_file - append text to file
 * @filename: name of file in question
 * @text_content: content to be appended
 *
 * Description: Return 1 if the file exists and -1
 * if the file does not exist or if the required
 * permissions to write the file are not present
 *
 * Return: 1 on success, -1 on fail (int)
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor;
	int exit_state;

	if (!filename)
		return (FILENAME_MISSING);

	file_descriptor = open(filename, O_WRONLY | O_APPEND);

	if (file_descriptor == APPEND_FAIL)
		return (APPEND_FAIL);

	if (!text_content)
		return (WRITE_SUCCESS);

	text_content = text_content ? text_content : STR_EMPTY;

	exit_state = write(file_descriptor, text_content, _strlen(text_content));

	close(file_descriptor);

	return (exit_state == WRITE_FAIL ? WRITE_FAIL : WRITE_SUCCESS);
}
