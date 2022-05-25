#include "lists.h"

/**
 * free_list - To frees a list
 * @head: The head of the linked list.
 * Return: not applicable.
 */

void free_list(list_t *head)
{
list_t *now;

while ((now = head) != NULL)
{
head = head->next;
free(now->str);
free(now);
}
}
