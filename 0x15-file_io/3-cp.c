#include "main.h"
#include "myfunctions.h"
#include <unistd.h>

/**
 * main - entry point
 *
 * @argc: count of arguments
 * @argv: elements of arguments
 *
 * Return: always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int fd, file_to, content_read, content_written;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = create_buffer(argv[2]);
	fd = open(argv[1], O_RDONLY);
	content_read = read(fd, buffer, 1024);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd == -1 || !content_read)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		free(buffer);
		exit(98);
	}
	content_written = write(file_to, buffer, content_read);
	if (!content_written)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		free(buffer);
		exit(99);
	}
	if (content_read != content_written)
	{
		free(buffer);
		exit(99);
	}
	free(buffer);
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		perror("close fd error");
		exit(100);
	}
	if (close(file_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close file_to %d\n", file_to);
		perror("close file_to");
		exit(100);
	}
	return (0);
}
