#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"

#define BUFFER_SIZE 1024

void print_error(int code, const char *format, const char *file);
void open_f(const char *filename, int flags, mode_t mode, int *fd, int is_src);
void copy_cont(int fd_from, int fd_to, const char *src_f, const char *dest_f);
void close_files(int fd_from, int fd_to);

/**
 * main - check the code
 * @argc: argument count
 * @argv: argument value/s
 * Return: ALways 0
 */
int main(int argc, char **argv)
{
	int fd_from, fd_to;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	open_f(argv[1], O_RDONLY, 0, &fd_from, 1);
	open_f(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664, &fd_to, 0);

	copy_cont(fd_from, fd_to, argv[1], argv[2]);

	close_files(fd_from, fd_to);

	return (0);
}

/**
 * print_error - prints error message to STDERR and exits
 * @code: exit code
 * @format: error message format
 * @file: pointer to file
 */
void print_error(int code, const char *format, const char *file)
{
	dprintf(STDERR_FILENO, format, file);
	exit(code);
}

/**
 * open_f - opens a file for reading or writing
 * @filename: pointer to file to open
 * @flags: flags for how to open the file (read-only, create, trunc etc)
 * @mode: File permissions (only if file is created)
 * @fd: file descriptor
 * @is_src: Boolean to see if it's the src file
 */
void open_f(const char *filename, int flags, mode_t mode, int *fd, int is_src)
{
	*fd = open(filename, flags, mode);
	if (*fd == -1)
	{
		if (is_src)
			print_error(98,
				"Error: Can't read from file %s\n", filename);
		else
		print_error(99,
			"Error: Can't write to %s\n", filename);
	}

}

/**
 * copy_cont - reads from the src file and writes to the dest file
 * @fd_from: file descriptor source
 * @fd_to: file descriptor destination
 * @src_f: src filename for printing errors
 * @dest_f: dest filename for printing errors
 */
void copy_cont(int fd_from, int fd_to, const char *src_f, const char *dest_f)
{
	ssize_t read_count, write_count;
	char local_buffer[1024];

	while ((read_count = read(fd_from, local_buffer, 1024)) > 0)
	{
		write_count = write(fd_to, local_buffer, read_count);
		if (write_count != read_count)
		{
			close(fd_from);
			close(fd_to);
			print_error(99,
				"Error: Can't write to %s\n", dest_f);
		}
	}

	if (read_count == -1)
	{
		close(fd_from);
		close(fd_to);
		print_error(98,
			"Error: Can't read from file %s\n", src_f);
	}
}

/**
 * close_files - closes the src and dest file descriptors
 * @fd_from: file descriptor source
 * @fd_to: file descriptor destination
 */
void close_files(int fd_from, int fd_to)
{
	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %d\n", fd_from);
		exit(100);
	}

	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %d\n", fd_from);
		exit(100);
	}
}
