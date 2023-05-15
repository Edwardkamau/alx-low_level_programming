#include "main.h"

/**
 * read_textfile - reads text file and prints it to POSIX stdout
 *
 * @filename: file to be read
 * @letters: characters to be read and printed
 *
 * Return: number of characters read and printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, letters_read, letters_written;
	char *buffer;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(letters);
	if (buffer == NULL)
		return (0);
	letters_read = read(filename, O_RDONLY);
	if (letters_read = -1)
		return (0);
	letters_written = write(fd, buffer, letters);
	if (letters_written == -1 || letters_read != letters_written)
		return (0);
	free(buffer);
	close(fd);

	return (letters_read);
}

