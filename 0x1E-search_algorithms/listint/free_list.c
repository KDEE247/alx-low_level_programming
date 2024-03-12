#include <stdlib.h>
#include "search_algos.h"
/**
 * free_list - Deallocates Singly Linked Lists.
 * @list: Ptr to the Linked List to be Freed.
 */
void free_list(listint_t *list)
{
	listint_t *node;

	if (list)
	{
		node = list->next;
		free(list);
		free_list(node);
	}
}
