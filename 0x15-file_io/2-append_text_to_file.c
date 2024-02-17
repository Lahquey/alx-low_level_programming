#include "main.h"

/**
 * append_text_to_file - appends text to the end of file
 * @filename: filename.
 * @text_content: added content.
 *
 * Return: 1 if file exists. -1 if files DNE
 * or if it failed.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_d;
	int n_letters;
	int rawr;

	if (!filename)
		return (-1);

	file_d = open(filename, O_WRONLY | O_APPEND);

	if (file_d == -1)
		return (-1);

	if (text_content)
	{
		for (n_letters = 0; text_content[n_letters]; n_letters++)
			;

		rawr = write(file_d, text_content, n_letters);

		if (rawr == -1)
			return (-1);
	}

	close(file_d);

	return (1);
}
