#include "main.h"

void check_arguments(int argc);
int open_source_file(char *filename);
int open_dest_file(char *filename);
void copy_content(int file_from, int file_to);
void close_files(int file_from, int file_to);

/**
  * main - program entry point
  * @argc: argument count
  * @argv: argument vector
  * Return: 0
  */

int main(int argc, char *argv[])
{
	int file_from, file_to; /* File descriptors */

	/* Check number of arguments */
	check_arguments(argc);

	/* Open source file */
	file_from = open_source_file(argv[1]);

	/* Open or create destination file with rw-rw-r-- permissions */
	file_to = open_dest_file(argv[2]);

	/* Read from source file and write to destination file */
	copy_content(file_from, file_to);

	/* Close files */
	close_files(file_from, file_to);

		return (0);
}
/**
  * check_arguments -Function to check the number of command-line arguments
  * @argc: argument count
  * Return: void
  */

void check_arguments(int argc)
{
/* If number of args is not 3, print error message and exit with status 97 */
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}

/**
  * open_source_file - Function to open the source file
  * @filename: file to be opened
  * Return: An integer representing the file descriptor of the source file
  */
int open_source_file(char *filename)
{
	/* Open the file in read-only mode */
	int file = open(filename, O_RDONLY);

/* If file could not be opened, print error message and exit with status 98 */
	if (file == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
	exit(98);
	}

	/* Return the file descriptor */
	return (file);
}

/**
  * open_dest_file - A function to open the destination file
  * @filename: pointer to a char that specifies destination file to be opened
  * Return: An int representing the file descriptor of the opened or created
  * destination file
  */
int open_dest_file(char *filename)
{
/* Open file in write-only mode, create file if !exist, truncate to 0 length*/
	int file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0664);

/* If file could not be opened, print err mesg, close source file,exit w 99 */
	if (file == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
	close(file);
		exit(99);
	}

	/* Return the file descriptor */
	return (file);
}

/**
  * copy_content - Function to copy content from the source file to the
  * destination file
  * @file_from: An integer representing the file descriptor of the source file.
  * @file_to :An integer representing the file descriptor of the
  * destination file.
  * Return: void
  */
void copy_content(int file_from, int file_to)
{
	char buffer[BUFFER_SIZE];
	ssize_t bytes;

/* Read from the source file and write to the destination file */
	while ((bytes = read(file_from, buffer, BUFFER_SIZE)) > 0)
	{

	if (write(file_to, buffer, bytes) != bytes)
	{
	dprintf(STDERR_FILENO, "Error: Can't write to %d\n", file_to);
	close(file_from);
	close(file_to);
	exit(99);
	}
	}

/* If the read operation failed, print error mesg and exit with status 98 */
	if (bytes == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't read from file %d\n", file_from);
	exit(98);
	}
}

/**
  * close_files- a Function to close the source and destination files
  * @file_from: An integer representing the file descriptor of the source file.
  * @file_to: An integer representing the file descriptor of destination file.
  *
  * Return: void.
  */
void close_files(int file_from, int file_to)
{
/* If source file->not be closed, print error msg and exit with status 100 */
	if (close(file_from) == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
	exit(100);
	}

/* If destn file could not be closed, print err mesg and exit with 100 */
	if (close(file_to) == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
	exit(100);
	}
}

