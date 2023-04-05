#include "lists.h"

/**
 * Utilizing the function free_listint, a linked list is released. 
 * @head: freeing the listint_t _t list
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
