#include "main.h"
#include <stdio.h>
/**
 *get_endianness - checks the endianness of the system
 *Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	/* declare a variable of type unsigned int and assign it the value 1 */
	unsigned int x = 1;
	/* declare a pointer of type char and point it to the address of x */
	char *c = (char *)&x;
	/* dereference the pointer and check if it is equal to 1 */
	if (*c == 1)
	return (1); /* little endian */
	else
	return (0); /* big endian */
}

