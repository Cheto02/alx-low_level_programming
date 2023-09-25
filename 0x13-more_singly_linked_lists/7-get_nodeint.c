#include "lists.h"  /* Include the necessary header file. */

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list.
 * @head: Pointer to the head of the linked list.
 * @index: Index of the desired node.
 *
 * Return: Pointer to the nth node, or NULL if the node does not exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;  /* Declare, initialize the count variable. */
	listint_t *current = head;  /* Declare, initialize current pointer. */

	while (current != NULL)  /* Start loop that traverses the list. */
	{
	if (count == index)  /* Check if current index = desired index. */
		return (current);  /* Return the current node. */

	current = current->next;  /* Move to the next node. */
	count++;  /* Increment the count. */
	}

	return (NULL);  /* Return NULL if the desired index is not found. */
}

