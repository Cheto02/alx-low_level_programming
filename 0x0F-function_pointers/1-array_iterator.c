#include "function_pointers.h"

/**
 * array_iterator - executes a function given as parameter on each
 * element of an array
 * @array: array to iterate over(list of numbers)
 * @size: size of the array(how many numbers in list)
 * @action: function to execute on each element of  array(do a special trick)
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;/* This tells us how many numbers are in our list.*/

	/**
	 * This code checks if either array or action is NULL.
	 * Before we start our magic, we check if our list of numbers (array)
	 * and our special trick (action) actually exist. If they don’t
	 * (NULL means they don’t exist), we stop
	 */
	if (array == NULL || action == NULL)
	return;

	/* We go through each number in
	 * our list (that’s what for (i = 0; i < size; i++)
	 */
	for (i = 0; i < size; i++)
	/* for each number, we do our special trick on it (action(array[i]))*/
	action(array[i]);
}

