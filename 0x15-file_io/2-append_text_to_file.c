#include "main.h"
#include "myfunctions.h"
#include <unistd.h>
#include <fcntl.h>

/**
 * append_text_to_file - appends a text to a file
 *
 * @filename: file to which the text is to be appended
 * @text_content: the text string to be appended
 *
 * Return: 1 upon success, 0 upon failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, write_bytes;
	char *buffer;

	if (!filename)
		return (-1);
	fd = open(filename, O_RDWR || O_APPEND);
	if (fd == -1)
		return (-1);
	buffer = malloc(sizeof(char) * slen(text_content));
	if (!text_content)
		return (1);
	write_bytes = write(fd, buffer, slen(text_content));
	if (!write_bytes)
		return (-1);
	free(buffer);
	close(fd);

	return (1);
}
