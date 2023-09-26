#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: pointer to the start of the list
 * Return: The address of the node where the loop starts, or
 * NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow, *fast;

	if (head == NULL) /* If list is empty, return NULL */
	return (NULL);

	slow = head; /* Initialize slow pointer to head */
	fast = head; /* Initialize fast pointer to head */

	while (slow && fast && fast->next) /* slow,fast & fast->next R  !\0 */
	{
		slow = slow->next; /* Move slow pointer one step */
		fast = fast->next->next; /* Move fast pointer two steps */

		if (slow == fast) /* If slow,fast pointers meet,loop is */
		{
		slow = head; /* Reset slow pointer to head */
		while (slow != fast) /* Loop until slow, fast ps meet again */
		{
			slow = slow->next; /* Move slow pointer one step */
			fast = fast->next; /* Move fast pointer one step */
		}
		return (slow); /* Return the start of the loop */
		}
	}

	return (NULL); /* If no loop is detected, return NULL */
}

