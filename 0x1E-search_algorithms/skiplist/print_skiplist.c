#include <stdio.h>
#include <stdlib.h>
#include "../search_algos.h"
/**
 * print_skiplist - Dump the content of a skiplist_t.
 * @list: Ptr to the Head of the List.
 * Return: void
 */
void print_skiplist(const skiplist_t *list)
{
	const skiplist_t *node;

	printf("List :\n");
	for (node = list; node; node = node->next)
	{
		printf("Index[%lu] = [%d]\n", node->index, node->n);
	}
	printf("\nExpress lane :\n");
	for (node = list; node; node = node->express)
	{
		printf("Index[%lu] = [%d]\n", node->index, node->n);
	}
	printf("\n");
}