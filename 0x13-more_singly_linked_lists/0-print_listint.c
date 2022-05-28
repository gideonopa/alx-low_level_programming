#include "lists.h"

/**
 * print_listint - To print elements of a singly linked list.
 * @h: Pointer to a list.
 * Return: number of nodes.
 **/

size_t print_listint(const listint_t *h)
{

	const listint_t *tp;
	unsigned int numb = 0;

	tp = h;

	while (tp)
	{
		printf("%d\n", tp->n);
		numb++;
		tp = tp->next;
	}

	return (numb);
}
