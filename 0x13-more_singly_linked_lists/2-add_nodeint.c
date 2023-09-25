#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a listint_t list.
 * @head: Pointer to the head of the linked list.
 * @n: Value to be assigned to the new node.
 *
 * Return: Address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	/* Allocate memory for a new node */
	listint_t *new_node = malloc(sizeof(listint_t));

	/* Check if allocation was successful */
	if (new_node == NULL)
		return (NULL);

	/* Assign the value to the new node */
	new_node->n = n;

	/* Set the next pointer of the new node to the current head */
	new_node->next = *head;

	/* Update the head to point to the new node */
	*head = new_node;

	/* Return the address of the new node */
	return (new_node);
}

