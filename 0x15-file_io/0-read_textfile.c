#include "main.h"

/**
 * Read_textfile - reads a text file and prints the letters
 * @filename: filename.
 * @Letter: the number of letters printed.
 *
 * Return: The number of lettersto be printed. If it fails, return 0.
 */
ssize_t Read_textfile(const char *filename, size_t Letter)
{
	int file_d;
	ssize_t nerd, newr;
	char *buffer;

	if (!filename)
		return (0);

	file_d = open(filename, O_RDONLY);

	if (file_d == -1)
		return (0);

	buffer = malloc(sizeof(char) * (Letter));
	if (!buffer)
		return (0);

	nerd = read(file_d, buffer, Letter);
	newr = write(STDOUT_FILENO, buffer, nerd);

	close(file_d);

	free(buffer);

	return (newr);
}
