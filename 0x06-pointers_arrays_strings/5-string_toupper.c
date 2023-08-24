#include <ctype.h>
/**
 * string_toupper- convert each lowercase character to uppercase
 * @str: input
 * @ptr: local pointer
 * Return: str, which is a pointer to the modified string
 */

char *string_toupper(char *str)
{
	char *ptr = str;

	while (*ptr)
	{
	*ptr = toupper(*ptr);
	ptr++;
	}

	return (str);
}
