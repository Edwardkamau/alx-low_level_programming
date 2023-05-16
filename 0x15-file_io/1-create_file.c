#include <unistd.h>
#include <fcntl.h>
#include "myfunctions.h"

/**
 * create_file - creates a file
 *
 * @filename: name of file to be created
 * @text_content: contents to be writtent in created file
 *
 * Return: 1 upon success, -1 upon failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, letters_written;

	if (!filename)
		return (-1);
	fd = open(filename, O_CREAT || O_WRONLY || O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (!text_content)
	{
		close(fd);
		return (1);
	}
	letters_written = write(fd, text_content, slen(text_content));
	if (letters_written == -1 || letters_written != slen(text_content))
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
