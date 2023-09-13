#include "3-calc.h"
#include <string.h>
/*
 * Define an array of operation structures, each containing an operator string
 * and a pointer to the corresponding operation function
 */

/* Function to get the operation function pointer based operator string */
int (*get_op_func(char *op))(int, int)
{
	op_t ops[] = {
	{"+", op_add},/* Addition operation */
	{"-", op_sub},/* Subtraction operation */
	{"*", op_mul},/* Multiplication operation */
	{"/", op_div},/* Division operation */
	{"%", op_mod},/* Modulo operation */
	{NULL, NULL} /* End of the array */

	};
	/* Input parameter: op*/
	int i = 0; /*Initialize index variable*/

	while (ops[i].op)
	{
	/*Loop until the end of the array*/
	if (strcmp(ops[i].op, op) == 0)
	/**
	 * Compare the input operator with the
	 * current operator
	 * Return the corresponding function pointer
	 * the operator matches
	 */
	{
		return (ops[i].f);
	}

	i++; /*Increment the index variable*/
	}
	/**
	 *Print an error message if the operator is not found
	 */
	printf("Error: Operator not found\n");
	exit(99); /*Exit the program with an error code*/
}

