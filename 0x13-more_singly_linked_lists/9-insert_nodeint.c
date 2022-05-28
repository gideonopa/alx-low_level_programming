#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - Insert a new
 * node at any given positiion.
 *
 * @head: First node address.
 * @idx: Position of the new node to be inserted in.
 * @n: Data of the new node.
 *
 * Return: The address of new node.
 **/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *tp;
	unsigned int x = 0;

	if (*head == NULL && idx != 0)
		return (NULL);
	if (idx != 0)
	{
	tp = *head;
	for (; x < idx - 1 && tp != NULL; x++)
		tp = tp->next;
	if (tp == NULL)
		return (NULL);
	}
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	new_node->next = tp->next;
	tp->next = new_node;
	return (new_node);
}
