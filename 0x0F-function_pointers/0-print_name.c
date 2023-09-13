#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: name to print
 * @f: function pointer to print function
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)/*checks if either name or f is NULL*/
	return;
	f(name);/* If not,call the function pointed to by f, with name as arg*/
}

