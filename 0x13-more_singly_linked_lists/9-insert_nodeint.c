#include "lists.h"  /* Include the necessary header file. */

/**
 * insert_nodeint_at_index - Inserts a new node at a given position.
 * @head: Pointer to the head of the linked list.
 * @idx: Index where the new node should be added.
 * @n: Data value of the new node.
 *
 * Return: Address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 0;  /* Declare,initialize the count variable. */
	listint_t *current = *head;  /* Declare,initialize current pointer. */
	listint_t *new_node;  /* Declare a pointer for the new node. */

	while (current != NULL)  /* loop that traverses the linked list. */
	{
	if (count == idx - 1)  /*if current index is one less than des idenx*/
	{
		new_node = malloc(sizeof(listint_t));  /* mem for new node. */
		if (new_node == NULL)  /* Check if malloc failed. */
		return (NULL);

		new_node->n = n;  /* Set the data value of the new node. */
		new_node->next = current->next;  /* Set the next pointer */
		current->next = new_node;  /* Set next pointer to new node. */

		return (new_node);  /* Return the address of the new node. */
	}

	current = current->next;  /* Move to the next node. */
	count++;  /* Increment the count. */
	}

	return (NULL);  /* Ret NULL if impossible to add new node at index. */
}

