#include "lists.h"

/**
 * A linked list is freed via the function free_listint2, which also sets the head of the list to NULL.
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
