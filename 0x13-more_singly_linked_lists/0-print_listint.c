#include "lists.h"

/**
 * print_listint - To print elements of a singly linked list.
 * @h: Pointer to a list.
 * Return: number of nodes.
 **/

size_t print_listint(const listint_t *h)
{

	size_t numb = 0;

	while (h)
	{
		printf("%d\n", h->n);
		numb++;
		h = h->next;
	}

	return (numb);
}
