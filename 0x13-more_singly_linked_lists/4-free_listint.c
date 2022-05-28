#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - Frees a linked list.
 *
 * @head: Address of the first node of a list.
 **/

void free_listint(listint_t *head)
{
	listint_t *tp1, *tp2;

	tp1 = head;
	while (tp1 != NULL)
	{
		tp2 = tp1->next;
		free(tp1);
		tp1 = tp2;
	}
}
