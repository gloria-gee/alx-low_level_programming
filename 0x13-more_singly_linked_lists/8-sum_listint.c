#include "lists.h"

/**
 * Sum_listint returns t in a linked list with @head designating the list's root node. Result: the total of all the data.
 */

int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
