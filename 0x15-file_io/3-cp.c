#include "main.h"
/**
 * error_handler - Handles errors and exits the prog with the spec exit code
 * @fd: File descriptor
 * @str: Error message
 * @exit_code: Exit code
 */
void error_handler(int fd, char *str, int exit_code)
{
	if (fd == -1)
	dprintf(2, "Error: %s\n", str);
	else
	dprintf(2, "Error: %s %d\n", str, fd);
	exit(exit_code);
}
/**
 * copy_file - Copies the content of a file to another file
 * @src_file: The source file to read from
 * @dst_file: The destination file to write to
 *
 * Return: 0 on success, 98 if unable to read, 99 if unable to write.
 * 100 if unable to close file descriptors
 */
int copy_file(const char *src_file, const char *dst_file)
{
	int src_fd, dst_fd;
	char buffer[BUFFER_SIZE];
	ssize_t bytes_read, bytes_written;

	src_fd = open(src_file, O_RDONLY);
	if (src_fd == -1)
	error_handler(src_fd, "Can't read from file", 98);

	dst_fd = open(dst_file, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (dst_fd == -1)
	error_handler(dst_fd, "Can't write to", 99);

	while ((bytes_read = read(src_fd, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(dst_fd, buffer, bytes_read);
		if (bytes_written != bytes_read)
		error_handler(dst_fd, "Can't write to", 99);
	}

	if (bytes_read == -1)
	error_handler(src_fd, "Can't read from file", 98);

	if (close(src_fd) == -1 || close(dst_fd) == -1)
	error_handler(src_fd, "Can't close fd", 100);

	return (0);
}
/**
 * main - Entry point of the program
 * @ac: Argument count
 * @av: Argument vector
 *
 * Return: 0 on success, 97 on incorrect argument count
 */
int main(int ac, char **av)
{
	if (ac != 3)
	error_handler(-1, "Usage: cp file_from file_to", 97);

	copy_file(av[1], av[2]);

	return (0);
}

