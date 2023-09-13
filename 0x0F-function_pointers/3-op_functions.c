#include <stdio.h>
#include <stdlib.h>

	/* Function to add two integers */
	int op_add(int a, int b)
	{
		return (a + b);
	}

	/* Function to subtract two integers */
	int op_sub(int a, int b)
	{
		return (a - b);
	}

	/* Function to multiply two integers */
	int op_mul(int a, int b)
	{
		return (a * b);
	}

	/* Function to divide two integers */
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
	 * op_mod- Function to find the remainder of two integers
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

