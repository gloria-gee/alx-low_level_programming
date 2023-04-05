#include "lists.h"

/**
 * Returns the total number of entries in a linked list of type listint_t @h: linked list of type listint_t to traverse the quantity of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}
