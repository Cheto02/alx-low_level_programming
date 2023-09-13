#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array to search in(This is our list of numbers. The * means we can
 * have many numbers, not just one.)
 * @size: size of the array(This tells us how many numbers are in our list.)
 * @cmp: function to compare values( This is the rule we use to find our
 * special number. The * here means it’s not just a normal rule,
 * but a special one that we can change whenever we want.)
 *
 * Return: index of the first element for which the cmp function does
 * not return 0,-1 if no element matches or if size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	 int i;
	/**
	 * Before we start, we check if our list of numbers (array)
	 * and our rule (cmp) actually exist and if the size of our list is
	 * more than 0.If they don’t(NULL means they don’t exist or size <= 0)
	 * we stop the game immediately and return -1
	 */
	if (array == NULL || cmp == NULL || size <= 0)
	return (-1);
	/**
	 * We go through each number in our list (for (i = 0; i < size; i++))
	 * and for each number, we check if it’s our special number by applying
	 * our rule to it (cmp(array[i])). If we find our special number,
	 * we immediately return its position in the list (return (i))
	 */
	for (i = 0; i < size; i++)
	{
	if (cmp(array[i]))
	return (i);
	}
	/*
	 * If we’ve gone through all the numbers and haven’t found our special
	 *  number, we return -1 to indicate that no special number was found.
	 */
	return (-1);
}

