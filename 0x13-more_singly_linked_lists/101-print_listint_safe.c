#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list
 * @head: Pointer to the head of the linked list
 *
 * Return: The number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow = head;
	const listint_t *fast = head;
	size_t count = 0;

	/* Check if the list is empty */
	if (head == NULL)
	{
		exit(98);
	}

	/* Loop detection using Floyd's cycle-finding algorithm */
	while (fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;

		/* If a loop is detected */
		if (slow == fast)
		{
			printf("-> [%p] %d\n", (void *)slow, slow->n);
			exit(98);
		}

		/* Print the current node and increment the count */
		printf("[%p] %d\n", (void *)slow, slow->n);
		count++;
	}

	/* Print the last node and increment the count */
	printf("[%p] %d\n", (void *)slow, slow->n);
	count++;

	return (count);
}

