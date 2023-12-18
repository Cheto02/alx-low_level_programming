#include "main.h"


#define BUFFER_SIZE 1024


/**
 * main - Entry point
 * @ac: Argument count
 * @av: Argument vector
 *
 * Return: 0 on success, 97 on incorrect argument count
 */
int main(int ac, char **av)
{
	if (ac != 3)
	{
		dprintf(2, "Usage: %s file_from file_to\n", av[0]);
		exit(97);
	}

	return (append_text_to_file(av[1], av[2]));
}
/**
 * append_text_to_file - Append the content of a file to another file
 * @filename: The name of the file to read from
 * @text_content: The name of the file to write to
 *
 * Return: 0 on success, -1 on failure, -100 on file descriptor closing failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd_file_from, fd_file_to;
	int bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];

	if (filename == NULL || text_content == NULL)
	{
		return (-1);
	}

	fd_file_from = open(filename, O_RDONLY);
	if (fd_file_from == -1)
	{
		print_error_and_exit("Error: Can't read from file", filename, -1);
	}

	fd_file_to = open(text_content, O_WRONLY | O_CREAT, 0664);
	if (fd_file_to == -1)
	{
		print_error_and_exit("Error: Can't create or open file", text_content, -1);
	}

	if (ftruncate(fd_file_to, 0) == -1)
	{
		print_error_and_exit("Error: Can't initialize file", text_content, -1);
	}

	bytes_read = read(fd_file_from, buffer, BUFFER_SIZE);
	while (bytes_read > 0)
	{
		bytes_written = write(fd_file_to, buffer, bytes_read);
		if (bytes_written != bytes_read)
		{
			print_error_and_exit("Error: Can't write to file", text_content, -1);
		}
		bytes_read = read(fd_file_from, buffer, BUFFER_SIZE);
	}

	if (close(fd_file_from) == -1)
	{
	print_error_and_exit("Error: Can't close file descriptor fd", "file_from", -100);
	}

	if (close(fd_file_to) == -1)
	{
	print_error_and_exit("Error: Can't close file descriptor fd", "file_to", -100);
	}

	return (0);
}
/**
 * print_error_and_exit - Print an ror mes and exit the proga spec exit code
 * @error_message: The error message to print
 * @file_name: The name of the file related to the error
 * @exit_code: The exit code to exit with
 */
void print_error_and_exit(const char *error_message, const char *file_name, int exit_code)
{
	dprintf(2, "%s %s\n", error_message, file_name);
	exit(exit_code);
}

