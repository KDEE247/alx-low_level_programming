#include "lists.h"

/**
 * print_listint - prints all the elements of given linked list.
 * @h: linked list of type listint_t to be printed.
 * Return: number of the nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}
