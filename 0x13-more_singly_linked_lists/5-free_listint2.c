#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list and sets the head to NULL.
 * @head: Pointer to a pointer to the head of the linked list.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	/* Traverse the list and free each node */
	while (*head != NULL)
	{
		temp = *head; /* Assign the current node to temp */
		*head = (*head)->next; /* Move head pointer to the next node */
		free(temp); /* Free the memory allocated for temp */
	}
	*head = NULL; /* Set the head pointer to NULL */
}

