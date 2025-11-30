#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include "main.h"

int hit_an_error(char *local_buffer, int f);

/**
 * read_textfile - reads a text file and prints to std output
 * @filename: pointer to file
 * @letters: number of letters it should read and print
 * Return: number of letters printed or 0 if errors
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t read_count, write_count;
	char *local_buffer;

	if (filename == NULL || letters == 0)
		return (0);

	/*set fd (file descriptor) so we can check open status*/
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	/*setup local buffer if opening file worked*/
	local_buffer = malloc(letters);
	if (local_buffer == NULL)
		return (hit_an_error(local_buffer, fd));

	/*reads file up to letters amount*/
	read_count = read(fd, local_buffer, letters);
	if (read_count == -1)
		return (hit_an_error(local_buffer, fd));

	/*writes or 'prints from local_buffer to read_count amount*/
	write_count = write(STDOUT_FILENO, local_buffer, read_count);
	if (write_count == -1 || write_count != read_count)
		return (hit_an_error(local_buffer, fd));

	free(local_buffer);
	close(fd);

	return (write_count);
}

/**
 * hit_an_error - frees local buffer and closes f
 * @local_buffer: pointer to local buffer
 * @fd: file descriptor
 * Return: 0
 */
int hit_an_error(char *local_buffer, int fd)
{
	free(local_buffer);
	close(fd);
	return (0);
}
