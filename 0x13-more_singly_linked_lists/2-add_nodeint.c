#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - Add a new node at the
 * beginning of a listint_t list.
 * @head: The address of the first node of a list.
 * @n: An integer to insert into the new node.
 * Return: Address of a new node.
 **/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *tp;

	tp = malloc(sizeof(listint_t));

	if (tp == NULL)
		return (NULL);

	tp->n = n;
	tp->next = *head;
	*head = tp;

	return (*head);
}
