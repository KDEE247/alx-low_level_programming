#include "lists.h"
/**
 * free_listint2 - frees up the linked lists.
 * @head: pointer to the listint_t list to be freed up.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	*head = NULL;
}
