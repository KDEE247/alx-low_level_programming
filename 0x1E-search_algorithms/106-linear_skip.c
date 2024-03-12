#include "search_algos.h"
/**
 * linear_skip - Searches For an Algorithm in a Sorted Singly
 * Linked List of Integers Using Linear Skip.
 * @list: Ptr to the  Head of the Linked List to Search.
 * @value: The Value to Search For.
 * Return: If Value is not Present, or the head of the list is NULL, NULL.
 * Else, a Ptr to the 1st Node Where the Value is Located.
 * Description: Prints a Value Every Time it is Compared in the List.
 * Uses the Square Root of the List Size as the jump Step.
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *node, *jump;

	if (list == NULL)
		return (NULL);

	for (node = jump = list; jump->next != NULL && jump->n < value;)
	{
		node = jump;
		if (jump->express != NULL)
		{
			jump = jump->express;
			printf("Value checked at index [%ld] = [%d]\n",
					jump->index, jump->n);
		}
		else
		{
			while (jump->next != NULL)
				jump = jump->next;
		}
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
			node->index, jump->index);

	for (; node->index < jump->index && node->n < value; node = node->next)
		printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);
	printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);

	return (node->n == value ? node : NULL);
}
