#include <stddef.h>
#include "lists.h"

/**
 * list_len - a function that returns the number of elements in a linked list.
 * @h: header pointer
 *Return: the number of elements in a linked list
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;
	const list_t *current = h;

	while (current != NULL)
		{
		count++;
		current = current->next;
		}
		return (count);
}

