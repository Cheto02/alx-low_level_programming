#include "lists.h"

/**
 * free_listint - Frees a listint_t list.
 * @head: Pointer to the head of the linked list.
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	/* Traverse the list and free each node */
	while (head != NULL)
	{
		temp = head; /* Assign the current node to temp */
		head = head->next; /* Move head pointer to the next node */
		free(temp); /* Free the memory allocated for temp */
	}
}

