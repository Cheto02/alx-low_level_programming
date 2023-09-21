#include <string.h>
#include "lists.h"


size_t print_list(const list_t *h)
{
	const list_t *current = h;
	size_t node_count = 0;

	while (current != NULL)
	{
	if (current->str == NULL)
	{
	printf("[%d] (nil)\n", 0);
	}
	else
	{
	printf("[%d] %s\n", current->len, current->str);
	}
		node_count++;
		current = current->next;
	}
	return (node_count);

}
