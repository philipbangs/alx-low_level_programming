#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- read text fil printf
 * @filename: textfile
 * @letters: numbr of letter to read.
 * Return: - actual number of byte reed and print filename is NULL.
 *
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t file_desc;
	ssize_t bytes_read;
	ssize_t bytes_written;

	file_desc = open(filename, O_RDONLY);
	if (file_desc == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	bytes_read = read(file_desc, buffer, letters);

	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

	free(buffer);
	close(file_desc);
	return (bytes_written);
}
