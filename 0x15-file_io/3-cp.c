#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"

/**
 * close_files - close open files
 * @fd_from: file descriptor for file being copied from
 * @fd_to: file descriptor for file being copied to
 *
 * Return: void
 */
void close_files(int fd_from, int fd_to)
{
	if (close(fd_from) == CLOSE_FAIL)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}

	if (close(fd_to) == CLOSE_FAIL)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}

}

/**
 * copy_from - open file from which copying is to be done
 * @name: name of file to open
 *
 * Return: file descriptor (int)
 */
int copy_from(char *name)
{
	int fd_from = open(name, O_RDONLY);

	if (fd_from == OPEN_ERROR)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", name);
		exit(98);
	}

	return (fd_from);
}

/**
 * copy_to - open (create) file to which copying it to be made
 * @name: name of file
 *
 * Return: void
 */
int copy_to(char *name)
{
	int fd_to = open(name, O_CREAT | O_TRUNC | O_WRONLY, 0664);

	if (fd_to == OPEN_ERROR)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", name);
		exit(99);
	}

	return (fd_to);
}

/**
 * run - program implementation
 * @argv: file names - {program, from, to}
 *
 * Return: void
 */
void run(char **argv)
{
	char buffer[BUFFER];
	int nchar = BUFFER;
	int fd_from;
	int fd_to;

	/* check against read permissions */
	fd_from = copy_from(argv[1]);
	fd_to = copy_to(argv[2]);

	while (nchar == BUFFER)
	{
		nchar = read(fd_from, &buffer, nchar);

		if (nchar != READ_FAIL)
			write(fd_to, &buffer, nchar);
	}

	close_files(fd_from, fd_to);
}

/**
 * main - entry point
 * @argc: count of command line arguments. program name included
 * @argv: command line arguments, first argument being the program name
 *
 * Return: 0 on success, else exit code (int)
 */
int main(int argc, char **argv)
{
	putchar('\n');

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	run(argv);

	return (EXIT_SUCCESS);
}
