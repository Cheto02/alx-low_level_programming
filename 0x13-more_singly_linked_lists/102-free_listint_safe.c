#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to the start of the list
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t num = 0;
	const listint_t *slow, *fast, *marker;

	if (head == NULL)
	exit(98);

	slow = head;
	fast = head;
	marker = head;

	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			slow = head;
			while (slow != fast)
			{
				printf("[%p] %d\n", (void *)slow, slow->n);
				num++;
				slow = slow->next;
				fast = fast->next;
			}

			printf("[%p] %d\n", (void *)slow, slow->n);
			num++;
			return (num);
		}
	}

	while (marker)
	{
		printf("[%p] %d\n", (void *)marker, marker->n);
		num++;
		marker = marker->next;
	}
	return (num);
}

