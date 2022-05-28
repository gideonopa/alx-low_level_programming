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
	listp_t *cr;

	if (head != NULL)
	{
		cr = *head;
		while ((tp = cr) != NULL)
		{
			cr = cr->next;
			free(tp);
		}
		*head = NULL;
	}
}

/**
 * print_listint_safe - prints a linked list.
 * @head: head of a list.
 *
 * Return: number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t n_nodes = 0;
	listp_t *hptr, *new, *add;

	hptr = NULL;
	while (head != NULL)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)head;
		new->next = hptr;
		hptr = new;

		add = hptr;

		while (add->next != NULL)
		{
			add = add->next;
			if (head == add->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp(&hptr);
				return (n_nodes);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		n_nodes++;
	}

	free_listp(&hptr);
	return (n_nodes);
}
