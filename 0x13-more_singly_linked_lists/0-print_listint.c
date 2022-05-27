#include "lists.h"

/**
 * print_listint - To prints all elements of a linked list
 * @h: linked list of type listint_t to print
 *
 * Return: All number of nodes
 */

size_t print_listint(const listint_t *h)
{

    size_t numb = 0;


    while (h)
    {
        printf("%d\n", h->n);
        num++;
        h = h->next;
    }

    return (numb);
}
