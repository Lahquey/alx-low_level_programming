#include "main.h"
#include <stdio.h>

/**
 * error_file - checks if the  files can be opened.
 * @file_from: file_from
 * @file_to: file_to
 * @argv: arguments vector
 * Return: returns a 0
 */
void error_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Cannot read from the file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Cannot write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - checks the code for Holberton School students.
 * @argc: the number of arguments
 * @argv: the arguments vector
 * Return: returns a 0
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, err_close;
	ssize_t n_chars, nwr;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: copy file_from file_to");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(file_from, file_to, argv);

	n_chars = 1024;
	while (n_chars == 1024)
	{
		n_chars = read(file_from, buffer, 1024);
		if (n_chars == -1)
			error_file(-1, 0, argv);
		nwr = write(file_to, buffer, n_chars);
		if (nwr == -1)
			error_file(0, -1, argv);
	}

	err_close = close(file_from);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close file_d %d\n", file_from);
		exit(100);
	}

	err_close = close(file_to);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close file_d %d\n", file_from);
		exit(100);
	}
	return (0);
}
