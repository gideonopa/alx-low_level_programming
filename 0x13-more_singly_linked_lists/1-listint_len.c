#include "lists.h"

/**
 * listint_len - Calculate the number of
 * elements in a listint_t list.
 * @h: Pointer to listint_t list.
 * Return: number of elements in integer.
 **/

size_t listint_len(const listint_t *h)
{

	const listint_t *tp;
	unsigned int numb = 0;

	tp = h;

	while (tp)
	{
		numb++;
		tp = tp->next;
	}

	return (numb);
}
