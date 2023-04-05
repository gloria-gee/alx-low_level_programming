#include "lists.h"

/**
 * Reverses a linked list with reverse_listint @head: pointer to the list's initial node 
 * Return: pointer to the list's first node
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	*head = prev;

	return (*head);
}

