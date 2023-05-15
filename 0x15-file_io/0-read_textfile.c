#include "main.h"
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

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
	int fd;
	ssize_t letters_read, letters_written;
	char *buffer;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	letters_read = read(fd, buffer, letters);
	if (letters_read == -1)
		goto KILL;
	letters_written = write(STDOUT_FILENO, buffer, letters_read);
	if (letters_written == -1)
		goto KILL;
	if (letters_read != letters_written)
		return (0);
	close(fd);

	return (letters_read);

KILL: free(buffer);
      close(fd);
      return (0);
}

