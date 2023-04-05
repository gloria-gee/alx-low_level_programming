#include "lists.h"

/**
 * add_node *The syntax to insert a new node at the start of a linked list is as follows: int 
 * @head: a pointer to the first node of the list 
 * @n: information to be inserted into the new node 
 * Return a reference to the new node or NULL when the operation has been successful.
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
