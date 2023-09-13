#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

/**
 * main- Entry point of the program
 * @argc: Number of command line arguments
 * @argv :Array of command line arguments
 *
 * Return :0 on success
 */
int main(int argc, char *argv[])
{
	/* Declare num1 and num2 integer variables*/
	int num1, num2;
	/*Declare op pointer to a character*/
	char *op;
	/*Declare func as a pointer to a function*/
	int (*func)(int, int);
	/*Declare result integer variable*/
	int result;
	/*Check if argument count is not equal to 4*/
	if (argc != 4)
	{
	/*Print usage message and return error code 98*/
	printf("Usage: %s num1 operator num2\n", argv[0]);
		return (98);
	}
	/*Convert argv[1] to an integer and store in num1*/
	num1 = atoi(argv[1]);
	/*Assign argv[2] to op*/
	op = argv[2];
	/*Convert argv[3] to an integer and store in num2*/
	num2 = atoi(argv[3]);
	/*Assign the function pointer to get_op_func based on the operator*/
	func = get_op_func(op);
	/*Call the function with num1 and num2 and store the result*/
	result = func(num1, num2);
	/*Print the result*/
	printf("%d\n", result);
		/*Return 0 to indicate successful execution*/
		return (0);
}

