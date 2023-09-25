#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list.
 * @head: Pointer to the head of the linked list.
 * @n: Value to be assigned to the new node.
 *
 * Return: Address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	/* Create a new node */
	listint_t *new_node = malloc(sizeof(listint_t));
	/* Create a temporary pointer to traverse the linked list */
	listint_t *last_node = *head;

	/* Check if memory allocation for the new node failed */
	if (new_node == NULL)
		return (NULL);

	/* Assign the value and next pointer of the new node */
	new_node->n = n;
	new_node->next = NULL;

	/* Check if the list is empty */
	if (*head == NULL)
	{
		/* Set the new node as the head and return it */
		*head = new_node;
		return (new_node);
	}

	/* Traverse the linked list to find the last node */
	while (last_node->next != NULL)
	last_node = last_node->next;

	/* Set the next pointer of the last node to the new node */
	last_node->next = new_node;

	/* Return the new node */
	return (new_node);
}

