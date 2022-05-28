#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - Find a node in a linked list.
 * @head: Address of the first node in a linked list.
 * @index: Position of a the node to find (starting from 0).
 * Return: The node address.
 **/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a = 0;

	if (head == NULL)
		return (NULL);
	for (a = 0; a < index; a++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
