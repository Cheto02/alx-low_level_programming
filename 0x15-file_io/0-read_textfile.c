#include "main.h"
/**
 * read_textfile - function that reads a specified number of characters
 * from a text file and writes them to the standard output.
 * @filename: A pointer to the name of the file to read from.
 * @letters: The maximum number of characters to read from the file.
 *
 * Return: The total number of characters read from the file or
 * 0 if the filename is NULL, or if the file could not be opened.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	/* Declare a file pointer */
	FILE *file;

	/* Initialize total_letters to 0 */
	size_t total_letters = 0;

	/* Declare a character variable to read from the file */
	char letter;

	/* Check if filename is NULL, if so return 0 */
	if (filename == NULL)
		return (0);
	/* Open the file in read mode */
	file = fopen(filename, "r");
	/* Check if file was successfully opened, if not return 0 */
	if (file == NULL)
		return (0);
	/* Loop through file until the end is reached or an error occurs */
	while (total_letters < letters)
	{
		if (fread(&letter, sizeof(char), 1, file) != 1)
		{
			break;
		}
		/* Check if the end of the file is reached */
		if (letter == EOF)
			break;
		/* Write the character to stdout */
		write(STDOUT_FILENO, &letter, sizeof(char));

		/* Increment the total number of characters read */
		total_letters++;
	}

	/* Close the file */
	fclose(file);
	/* Return the total number of characters read */
	return (total_letters);
}

