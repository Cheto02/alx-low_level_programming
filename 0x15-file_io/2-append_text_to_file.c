#include "main.h"
/**
  * append_text_to_file - Function that appends text at the end of a file
  * @filename: name of file to be appended
  * @text_content: text to be appended
  *
  *Return: Return 1 if the file exists and -1 if the file does not exist.
  */
int append_text_to_file(const char *filename, char *text_content)
{
	FILE *file; /* Declare a file pointer */

	/* If filename is NULL, return -1 indicating an error */
	if (filename == NULL)
	return (-1);

	/* If text_content is NULL, do not add anything to the file */
	if (text_content == NULL)
	{
	/* Try to open the file in read mode to check if it exists */
	file = fopen(filename, "r");
	 /* If file cant be opened,it !exist/ we dont have read permissions */
	if (file == NULL)
		return (-1); /* Return -1 indicating an error */
	fclose(file); /* Close the file after checking */
	return (1); /*indicating success->file exists,->we have rd permssns */
	}
/* Open file in append mode. If file does not exist, fopen will return NULL */
	file = fopen(filename, "a");
	if (file == NULL) /* Check if file was successfully opened */
		return (-1); /* Return -1 if file could not be opened */

/* Write text_content to EOF. If write ops fails, return -1 -> error */
	if (fputs(text_content, file) == EOF)
		return (-1);

	fclose(file); /* Close the file after writing to it */

	return (1); /* Return 1 indicating success */
}

