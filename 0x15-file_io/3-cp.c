#include "main.h"

/**
 * _putchar - Writes a character to stdout
 * @c: The character to print
 *
 * Return: On success 1, on error -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * main - Entry point
 * @ac: Argument count
 * @av: Argument vector
 *
 * Return: 0 on success, 97, 98, 99, or 100 on failure
 */
int main(int ac, char **av)
{
	int file_from, file_to, bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];

	if (ac != 3)
	error_exit(97, "Usage: cp file_from file_to\n", NULL);

	file_from = open(av[1], O_RDONLY);
	if (file_from == -1)
	error_exit(98, "Error: Can't read from file ", av[1]);

	file_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to == -1)
	error_exit(99, "Error: Can't write to ", av[2]);

	while ((bytes_read = read(file_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(file_to, buffer, bytes_read);
		if (bytes_written != bytes_read)
		error_exit(99, "Error: Can't write to ", av[2]);
	}

	if (bytes_read == -1)
	error_exit(98, "Error: Can't read from file ", av[1]);

	if (close(file_from) == -1)
	error_exit(100, "Error: Can't close fd ", av[1]);

	if (close(file_to) == -1)
	error_exit(100, "Error: Can't close fd ", av[2]);

	return (0);
}

/**
 *error_exit - Display an error message and exit the program with a error code
 *@code: The error code to exit with
 *@message: The error message to display
 *@file_name: The name of the file related to the error (optional)
 */

void error_exit(int code, char *message, char *file_name)
{
	while (*message)
	{
		_putchar(*message);
		message++;
	}

	if (file_name)
	{
		while (*file_name)
		{
			_putchar(*file_name);
			file_name++;
		}
	}

	exit(code);
}

