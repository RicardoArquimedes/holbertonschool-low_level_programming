#include "lists.h"
/**
 * print_listint - function that prints all the elements
 * of a list_t list.
 * @h: head list.
 *
 * Return: number of node.
 */
size_t print_listint(const listint_t *h)
{
	size_t a;

	for (a = 0; h != NULL; a++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (a);
}
