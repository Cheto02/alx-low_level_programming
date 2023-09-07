#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked- a function that allocates memory using malloc
 * @b: input number of bytes to allocate
 *
 * Return: ptr to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);
	/* if malloc fails, terminate with status value 98 */
	if (p == NULL)
	exit(98);

	return (p);
}

