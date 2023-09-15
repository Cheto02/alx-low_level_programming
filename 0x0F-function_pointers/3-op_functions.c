#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - Function to add two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: Sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Function to subtract two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: Difference of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Function to multiply two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: Product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Function to divide two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: Result of division of a by b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error: Division by zero\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - Function to find the remainder of two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: Remainder of division of a by b
 */
int op_mod(int a, int b)
{
	if (b == 0)
{
		printf("Error: Modulo by zero\n");
		exit(100);
}
	return (a % b);
}

