#include "lists.h"
/**
 * reverse_listint - Reverses a listint_t linked list
 *
 * @head: Head of linked lists
 *
 * Return: listint_t
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current = *head;
	listint_t *next_node = NULL;

	/* Check if head pointer is NULL */
	if (head == NULL)
	{
		return (NULL);
	}

	/* Init current node as head and set *head to NULL */
	current = *head;
	*head = NULL;

	/* Traverse linked list & reverse links between the nodes */
	while (current != NULL)
	{
		next_node = current->next;

		current->next = *head;
		*head = current;
		current = next_node;
	}

	return (*head);
}

