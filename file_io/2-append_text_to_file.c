#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: pointer to file
 * @text_content: pointer to text to add
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t write_count;
	size_t length = 0;

	if (filename == NULL)
		return (-1);
	/*
	 * set fd (file descriptor) so we can check open status
	 * O_WRONLY - open for write only access
	 * O_APPEND - goes to end of file
	 */
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	/*if text_content is empty we can return as there's nothing to add*/
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	while (text_content[length] != '\0')
		length++;

	write_count = write(fd, text_content, length);
	if (write_count == -1 || (size_t)write_count != length)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
