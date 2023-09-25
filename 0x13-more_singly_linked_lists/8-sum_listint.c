#include "lists.h"  /* Include the necessary header file. */

/**
 * sum_listint - Returns sum of all the data (n) of a listint_t linked list.
 * @head: Pointer to the head of the linked list.
 *
 * Return: Sum of all the data, or 0 if the list is empty.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;  /* Declare and initialize the sum variable. */
	listint_t *current = head;  /* Declare, initialize current pointer. */

	while (current != NULL)  /* Start loop to traverses the linked list. */
	{
		sum += current->n;  /* Add data of current node to the sum. */
		current = current->next;  /* Move to the next node. */
	}

	return (sum);  /* Return the sum of all the data. */
}

