#include "lists.h"

/**
 * Frees a linked list using the function free_listint 
 * @head: listint_t _t list to be freed
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
