#include "lists.h"

/**
 * add_node_end - To add a new node at the end of a list.
 * @head: The ddress of the first node of a list.
 * @str: The ddress of the string to insert into the new node.
 * Return: The address of the new node.
 **/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tp1, *tp2;
	unsigned int len = 0;

	if (str == NULL)
		return (NULL);

	tp1 = malloc(sizeof(list_t));
	if (tp1 == NULL)
		return (NULL);

	tp1->str = strdup(str);
	if (tp1->str == NULL)
	{
		free(tp1);
		return (NULL);
	}
	while (str[len])
		len++;
	tp1->len = len;
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
