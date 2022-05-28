#include "lists.h"

/**
 * free_listp - frees a linked list
 * @head: head of a list.
 *
 * Return: no return.
 */
void free_listp(listp_t **head)
{
	listp_t *tp;
	listp_t *current;

	if (head != NULL)
	{
		current = *head;
		while ((tp = current) != NULL)
		{
			current = current->next;
			free(tp);
		}
		*head = NULL;
	}
}


/**
 * print_listint_safe - prints a linked list, safely.
 * @head: head to list of type listint_t
 *
 * Return: number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t numb = 0;
	long int d;

	while (head)
	{
		d = head - head->next;
		numb++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (d > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}

	return (numb);
}
