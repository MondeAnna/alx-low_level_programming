#include "main.h"

/**
 * read_textfile - read text file, print to posix stdout
 * @filename: name of file to be read
 * @read_count: letter count to be read
 *
 * Return: count of read and printed; zero upon fail (ssize_t)
 */
ssize_t read_textfile(const char *filename, size_t read_count)
{
	ssize_t n_read_write = 0;
	short int file_descriptor;
	char *buffer;

	if (!filename)
		return (FILENAME_MISSING);

	file_descriptor = open(filename, O_RDONLY);

	if (file_descriptor == OPEN_ERROR)
		return (OPEN_FAIL);

	buffer = malloc(sizeof(*filename) * read_count + 1);

	if (!buffer)
	{
		close(file_descriptor);
		return (MALLOC_FAIL);
	}

	n_read_write = read(file_descriptor, buffer, read_count);
	n_read_write = n_read_write == READ_FAIL ? READ_FAIL : n_read_write;

	buffer[read_count] = '\0';

	n_read_write = write(STDOUT, buffer, n_read_write);
	n_read_write = n_read_write == WRITE_FAIL ? WRITE_FAIL : n_read_write;

	free(buffer);
	close(file_descriptor);

	return (n_read_write);
}
