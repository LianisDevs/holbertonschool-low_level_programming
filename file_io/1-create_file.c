#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include "main.h"

/**
 * create_file - creates a file
 * @filename: pointer to file
 * @text_content: pointer to text to add
 * Return: 1 on success or -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t write_count;
	size_t length = 0;

	if (filename == NULL)
		return (-1);

	/*
	 * set fd (file descriptor) so we can check open status
	 * O_WRONLY - open for write only access
	 * O_CREAT - if the file does not exist create it
	 * O_TRUNC - if the file does exist it will be truncated to length 0
	 * 0600 - sets file permissions to rw-------
	 */
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	/*getting text_content length*/
	if (text_content != NULL)
	{
		while (text_content[length] != '\0')
			length++;
	}

	/*writes to file the text content up to length amount*/
	write_count = write(fd, text_content, length);
	if (write_count == -1 || (size_t)write_count != length)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
