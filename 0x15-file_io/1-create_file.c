#include "main.h"
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
	FILE *file; /* Declare a file pointer */

	if (filename == NULL) /* Check if filename is NULL */
		return (-1); /* Return -1 if filename is NULL */

	if (text_content == NULL) /* Check if text_content is NULL */
	{
		file = fopen(filename, "w"); /* Open file in write mode */
		if (file == NULL) /* Check if file was successfully opened */
		return (-1); /* Return -1 if file could not be opened */
		fclose(file); /* Close the file */
			return (1); /* Return 1 indicating success */
	}

	file = fopen(filename, "w"); /* Open file in write mode */
	if (file == NULL) /* Check if file was successfully opened */
		return (-1); /* Return -1 if file could not be opened */

	if (fputs(text_content, file) == EOF) /* Write text_content to file */
		return (-1); /* Return -1 if write operation fails */

	fclose(file); /* Close the file */
	return (1); /* Return 1 indicating success */
}
