#include "lists.h"

/**
 * Prints all the items in a linked list of type listint_t using the print_listint function.
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
