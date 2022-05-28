#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - Add another node at the end of a list.
 * @head: Address of the first node of a linked list.
 * @n: An integer to insert in the new node.
 * Return: Address of new node.
 **/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tp1, *tp2;

	tp1 = malloc(sizeof(listint_t));
	if (tp1 == NULL)
		return (NULL);

	tp1->n = n;
	tp1->next = NULL;

	if (*head == NULL)
	{
		*head = tp1;
		return (tp1);
	}

	tp2 = *head;

	while (tp2->next)
		tp2 = tp2->next;
	tp2->next = tp1;
	return (tp1);
}
