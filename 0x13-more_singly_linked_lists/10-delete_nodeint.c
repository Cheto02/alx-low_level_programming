#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a given index in a linked list.
 * @head: Pointer to the head of the linked list.
 * @index: Index of the node to delete.
 *
 * Return: 1 if successful, -1 if failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *prev;
	unsigned int count = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	current = *head;
	prev = NULL;

	/* Traverse the linked list to find the node at the given index */
	while (current != NULL && count < index)
	{
		prev = current;
		current = current->next;
		count++;
	}

	/* If the index is beyond the end of the linked list */
	if (current == NULL)
	return (-1);

	/* If the node to delete is the head node */
	if (index == 0)
	{
		*head = current->next;
	}
	else
	{
		prev->next = current->next;
	}

	free(current);
	return (1);
}

