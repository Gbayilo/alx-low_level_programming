#include "main.h"

/**
 *read_textfile - Reads and prints a text file to the POSIX standard output.
 * @filename: The name of the file to be read.
 * @num_letters: The number of letters to read and print.
 *
 * Return: The actual number of letters read and printed, 0 on error.
 */
ssize_t read_textfile(const char *filename, size_t num_letters)
{
	int file_descriptor;
	ssize_t bytes_read, bytes_written;
	char *text_buffer;

	if (filename == NULL)
		return (0);

	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
		return (0);

	text_buffer = malloc(sizeof(char) * num_letters);
	if (text_buffer == NULL)
	{
		close(file_descriptor);
		return (0);
	}

	bytes_read = read(file_descriptor, text_buffer, num_letters);
	if (bytes_read == -1)
	{
		close(file_descriptor);
		free(text_buffer);
		return (0);
	}

	bytes_written = write(STDOUT_FILENO, text_buffer, bytes_read);
	if (bytes_written == -1 || bytes_written != bytes_read)
	{
		close(file_descriptor);
		free(text_buffer);
		return (0);
	}

	close(file_descriptor);
	free(text_buffer);
	return (bytes_written);
}
