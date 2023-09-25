#include <string.h>
#include "lists.h"
/**
  *add_node- a function that adds a new node at the beginning of a list
  *@head: pointer to pointer to list_t.
  *@str: pointer to a constant char.
  *
  *Return:the address of the new element, or NULL if it failed
  */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->str = strdup(str);
		if (new_node->str == NULL)
			{
			free(new_node);
			return (NULL);
			}

		new_node->len = strlen(new_node->str);
		new_node->next = *head;
		*head = new_node;

		return (new_node);
}
