#include "main.h"

/**
 * read_textfile -a function that  reads a text file and prints the letters
 * @filename: filename
 * @letters:the numbers of letters to be printed.
 * Return: The numbers of letters printed. If it fails then return 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_d;
	ssize_t nerd, newr;
	char *buffer;

	if (!filename)
		return (0);

	file_d = open(filename, O_RDONLY);

	if (file_d == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters));
	if (!buffer)
		return (0);

	nerd = read(file_d, buffer, letters);
	newr = write(STDOUT_FILENO, buffer, nerd);

	close(file_d);

	free(buffer);

	return (newr);
}
