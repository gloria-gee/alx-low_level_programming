#include "lists.h"

/**
 * Deletes the head node of a linked list using the function pop_listint 
 * @head: reference to the linked list's initial member 
 * Return: the information included in the removed entries, or 0 if the list is empty.
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
