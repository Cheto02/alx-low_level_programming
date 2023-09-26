#include "lists.h"
/* free_listint_safe - frees a listint_t list */
/* Parameters: */
/*     h: double pointer to the start of the list */
/* Return: */
/*     the number of nodes in the list */
size_t free_listint_safe(listint_t **h)
{
    size_t num = 0;
    listint_t *temp;

    if (h == NULL || *h == NULL)
        return (0);

    while (*h)
    {
        num++;  /* Increment the count of nodes */
        temp = (*h)->next;  /* Store the next node in temp */
        free(*h);  /* Free the current node */
        *h = temp;  /* Move to the next node */
    }

    return (num);  /* Return the number of nodes */
}

