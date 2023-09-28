#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int x = 1; /* Declare an unsigned int x and initialize it to 1 */
	/* Declare a char pointer c and point it to the address of xi */
	/* This is done to access the individual bytes of the integer */
	char *c = (char*)&x;
	/* Return the value pointed by c. If system is little endian */
	return (*c);/*c will be 1. If system is big endian, *c will be 0 */
}
