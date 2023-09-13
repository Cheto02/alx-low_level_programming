#include "function_pointers.h"

/**
 * array_iterator - executes a function given as parameter on each
 * element of an array
 * @array: array to iterate over
 * @size: size of the array
 * @action: function to execute on each element of the array
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	/**
	 * This code checks if either array or action is NULL.
	 * If not, it iterates over each element in the array and calls
	 * the function pointed to by action, passing the current element as argument
	 */
	if (array == NULL || action == NULL)
	return;

	for (i = 0; i < size; i++)
	action(array[i]);
}

