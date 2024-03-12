#include <stdlib.h>
#include "search_algos.h"
/**
 * free_skiplist - Deallocates a Singly Linked List.
 * @list: Ptr to the Linked List to be Freed.
 */
void free_skiplist(skiplist_t *list)
{
	skiplist_t *node;

	if (list)
	{
		node = list->next;
		free(list);
		free_skiplist(node);
	}
}
