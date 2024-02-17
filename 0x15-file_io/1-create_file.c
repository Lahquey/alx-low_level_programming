#include "main.h"

/**
 * create_file - creates the file
 * @filename: filename.
 * @text_content: content written into the file.
 *
 * Return: 1 if it is a success. -1 if it is a fail.
 */
int create_file(const char *filename, char *text_content)
{
	int file_d;
	int n_letters;
	int rwr;

	if (!filename)
		return (-1);

	file_d = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file_d == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (n_letters = 0; text_content[n_letters]; n_letters++)
		;

	rwr = write(file_d, text_content, n_letters);

	if (rwr == -1)
		return (-1);

	close(file_d);

	return (1);
}
