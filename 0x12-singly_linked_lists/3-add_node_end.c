#include <string.h>
#include "lists.h"

/**
 * add_node_end - a function that adds a new node at the end of a list.
 * @head: pointer to pointer to list_t.
 * @str: string to duplicate.
 *
 * Return: address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *current;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
	/* Memory allocation failed */
	return (NULL);
	}

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
	/* String duplication failed */
	free(new_node);
	return (NULL);
	}

	new_node->len = strlen(new_node->str);
	new_node->next = NULL;

	if (*head == NULL)
	{
	*head = new_node;
	}
	else
	{
	current = *head;
	while (current->next != NULL)
	{
		current = current->next;
	}
		current->next = new_node;
	}
	return (new_node);
}

