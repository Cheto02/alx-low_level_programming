#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main- Entry point of the program
 * @argc: Number of command line arguments
 * @argv: Array of command line arguments
 *
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	int num1, num2;
	int (*op_func)(int, int);

	if (argc != 4)
	{
		printf("Error:\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	op_func = get_op_func(argv[2]);

	printf("%d\n", op_func(num1, num2));

	return (0);
}

