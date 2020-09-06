#include "lists.h"
/**
 * dlistint_len -returns the number of elements in a double linked list
 * @h: address of head
 * Return: nothing
*/

size_t dlistint_len(const dlistint_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		h = h->next;
		n = n + 1;
	}
	return (n);
}
