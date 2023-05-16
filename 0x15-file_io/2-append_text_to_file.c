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

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY || O_APPEND);
	if (fd == -1)
		return (-1);
	if (!text_content)
	{
		close(fd);
		return (1);
	}
	write_bytes = write(fd, text_content, slen(text_content));
	if (!write_bytes || write_bytes != slen(text_content))
	{
		close(fd);
		return (-1);
	}
	close(fd);

	return (1);
}
