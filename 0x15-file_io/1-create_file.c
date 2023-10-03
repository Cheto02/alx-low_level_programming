#include "main.h"
#include <string.h>

/**
 * create_file - creates a file with the given filename and writes the
 * given content into it.
 * @filename: A pointer to a constant character that specifies the filename.
 * @text_content: A pointer to a character that specifies the content to
 * be written into the file.
 *
 * Return: 0 if the file is successfully created and
 * written, otherwise returns -1.
 */
int create_file(const char *filename, char *text_content)
{
	int file; /* Declare a file descriptor */

	if (filename == NULL) /* Check if filename is NULL */
	return (-1); /* Return -1 if filename is NULL */

	if (text_content == NULL) /* Check if text_content is NULL */
	{
	/* Open file with rw------- permissions */
		file = open(filename, O_CREAT | O_WRONLY, 0600);
		if (file == -1) /* Check if file was successfully opened */
		return (-1); /* Return -1 if file could not be opened */
		close(file); /* Close the file */
		return (1); /* Return 1 indicating success */
	}
	/* Open file with rw------- permissions */
	file = open(filename, O_CREAT | O_WRONLY, 0600);
	if (file == -1) /* Check if file was successfully opened */
	return (-1); /* Return -1 if file could not be opened */
	/* Write text_content to file */
	if (write(file, text_content, strlen(text_content)) == -1)
		return (-1); /* Return -1 if write operation fails */

	close(file); /* Close the file */
	return (1); /* Return 1 indicating success */
}
