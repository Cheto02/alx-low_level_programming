#include "main.h"
/**
 * _strchr- a function that locates a character in a string.
 * @s: pointer to a string (an array of characters) in which we will search for
 * a specific character
 * @c: the character we are searchingfor inthe string
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
	/* Initialize an integer variable 'i' to 0. This will be used as an index
	 * to traverse the string 's'
	 */
	int i = 0;
	/* Start a loop that iterates through each character of 's' until the null
	 * terminator ('\0') is encountered
	 */
	for (; s[i] >= '\0'; i++)
	{
	/* Check if the current character in 's' is equal to the character 'c' */
	if (s[i] == c)
	/* If a match is found, return a pointer to the location of 'c' within 's' */
	return (&s[i]);
	}
	/* If 'c' is not found in 's', return NULL (0) to indicate that the character
	 * was not found in the string
	 */
	return (0);
}

