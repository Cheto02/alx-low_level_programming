#include <stdio.h> /* Include standard input and output library */
#include <stdlib.h> /* Include standard library */
#include "lists.h" /* Include lists header file */

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to the start of the list
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head) /* Function definition */
{
	size_t num = 0; /* Initialize node counter */
	const listint_t *slow, *fast, *marker; /* Declare pointers */

	if (head == NULL) /* Check if head is NULL */
	exit(98); /* If true, exit program with status 98 */

	slow = head; /* Initialize slow pointer to head */
	fast = head; /* Initialize fast pointer to head */
	marker = head; /* Initialize marker pointer to head */
	/* Loop while slow, fast and fast->next are not NULL */
	while (slow && fast && fast->next)
	{
	slow = slow->next; /* Move slow pointer one step */
	fast = fast->next->next; /* Move fast pointer two steps */

	if (slow == fast) /* Check if slow & ointers meet, inditg a loop */
	{
	slow = head; /* Reset slow pointer to head */
	while (slow != fast) /* Loop until slow and fast pointers meet again */
	{
	printf("[%p] %d\n", (void *)slow, slow->n); /* Print node addrs,val */
	num++; /* Increment node counter */
	slow = slow->next; /* Move slow pointer one step */
	fast = fast->next; /* Move fast pointer one step */
	}

	printf("[%p] %d\n", (void *)slow, slow->n);
	num++; /* Increment node counter */
	return (num); /* Return number of nodes printed */
	}
	}

	while (marker) /* Loop while marker is not NULL */
	{
	printf("[%p] %d\n", (void *)marker, marker->n);
	num++; /* Increment node counter */
	marker = marker->next; /* Move marker pointer one step */
	}

	return (num); /* Return number of nodes printed if no loop  detected */
}

