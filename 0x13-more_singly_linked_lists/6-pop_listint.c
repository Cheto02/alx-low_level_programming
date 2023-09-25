#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list
 *               and returns the head node's data (n).
 * @head: Pointer to a pointer to the head of the linked list.
 *
 * Return: The head node's data (n), or 0 if the linked list is empty.
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if (*head == NULL)
	return (0);

	temp = *head; /* Assign the current head node to temp */
	data = temp->n; /* Save the data of the head node */
	*head = (*head)->next; /* Move the head pointer to the next node */
	free(temp); /* Free the memory allocated for the previous head node */

	return (data); /* Return the data of the previous head node */
}

