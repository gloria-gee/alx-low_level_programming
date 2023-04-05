#include "lists.h"

/**
 * add_nodeAdd a new node to the beginning of a linked list with the following syntax: int 
 * @head: pointer to the list's initial node 
 * @n: data to insert in the new node 
 * Upon successful completion, return a reference to the new node or NULL.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}
