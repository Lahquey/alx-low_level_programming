#include "main.h"

/**
 * custom_read_textfile - reads a specified text file and prints a given number of letters.
 * @file_path: The path to the text file.
 * @num_letters: The number of letters to be printed.
 *
 * Return: The actual number of letters printed. If it fails, it returns 0.
 */
ssize_t custom_read_textfile(const char *file_path, size_t num_letters)
{
    int file_descriptor;
    ssize_t bytes_read, bytes_written;
    char *buffer;

    if (!file_path)
        return (0);

    file_descriptor = open(file_path, O_RDONLY);

    if (file_descriptor == -1)
        return (0);

    buffer = malloc(sizeof(char) * (num_letters));
    if (!buffer)
        return (0);

    bytes_read = read(file_descriptor, buffer, num_letters);
    bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

    close(file_descriptor);

    free(buffer);

    return (bytes_written);
}

