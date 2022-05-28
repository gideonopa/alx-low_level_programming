#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - Frees a linked list.
 * @head: Address of the first node of a list.
 **/

void free_listint2(listint_t **head)
{
	listint_t *tp;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		tp = (*head)->next;
		free(*head);
		*head = tp;
	}
}
