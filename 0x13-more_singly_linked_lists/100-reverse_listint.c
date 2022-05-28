#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: head of a linked list
 * Return: pointer to the first node in the new linked list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prv;
	listint_t *nxt;

	prv = NULL;
	nxt = NULL;

	while (*head)
	{
		nxt = (*head)->next;
		(*head)->next = prv;
		prv = *head;
		*head = nxt;
	}

	*head = prv;

	return (*head);
}
