#include "main.h" /* Include the header file */

/**
  * binary_to_uint- Function to convert binary to unsigned int
  * @b: binary string
  * Return: converted number or 0
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int i, len; /* Declare variables for loop counters,length of string */

	if (!b) /* Check if string is NULL */
	return (0); /* Return 0 if string is NULL */

	/* Calculate length of str and check if it contains only '0' & '1' */
	for (len = 0; b[len] != '\0'; len++)
	{

		 /* If character is not '0' or '1' */
		if (b[len] != '0' && b[len] != '1')
		return (0); /* Return 0 */
	}

	/* Convert binary to unsigned int */
	for (i = 0; i < len; i++)
	{
		num <<= 1; /* Shift current number to left */
		if (b[i] == '1') /* If character is '1' */
		num += 1; /* Add 1 to the number */
	}

	return (num); /* Return the converted number */
}
