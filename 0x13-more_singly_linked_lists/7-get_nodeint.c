#include "lists.h"

/**
 * Returns the nth node of a linked list using the function get_nodeint_at_index. 
 * @head: the list's head 
 * @index: the node's index If the node is absent, the function returns NULL.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index && head != NULL; i++)
	{
		head = head->next;
	}

	return (head);
}
