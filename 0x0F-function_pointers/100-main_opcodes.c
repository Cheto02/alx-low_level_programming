#include <stdio.h> /* Include standard input/output library */

/**
 * main - prints the opcodes of its own main function
 * @argc: number of arguments passed to the function
 * @argv: array of pointers to the arguments
 *
 * Return: 0 on success, 1 if number of arguments is incorrect,
 *         or 2 if number of bytes is negative
 */
int main(int argc, char **argv) /* Define main function */
{
	int i, n; /* Declare integer variables i and n */

	if (argc != 2) /* Check if number of arguments is not equal to 2 */
	{
		printf("Error\n"); /* Print error message */
		return (1); /* Return 1 */
	}

	n = atoi(argv[1]); /* Convert second argument to integer and assign to n */

	if (n < 0) /* Check if n is negative */
	{
		printf("Error\n"); /* Print error message */
		return (2); /* Return 2 */
	}

	for (i = 0; i < n; i++) /* Loop from 0 to n-1 */
	printf("%02x ", ((unsigned char *)main)[i]); /* Print opcode in hex format */

	printf("\n"); /* Print new line */

	return (0); /* Return 0 */
}

