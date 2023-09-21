#include <string.h>
#include "lists.h"
/**
 * print_list - a function that takes a pointer to the head of a linked list.
 * @h: head node of the linked list.
 *
 *Return: number of nodes in the linked list.
 */

size_t print_list(const list_t *h)
{
	const list_t *current = h;
	size_t node_count = 0;

	while (current != NULL)
	{
	if (current->str == NULL)
	{
	printf("[%d] (nil)\n", 0);
	}
	else
	{
	printf("[%d] %s\n", current->len, current->str);
	}
		node_count++;
		current = current->next;
	}
	return (node_count);

}
