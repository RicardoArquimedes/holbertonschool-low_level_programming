#include "lists.h"
/**
 * insert_dnodeint_at_index - unction that inserts a new node
 * at a given position.
 * @h: address of head main
 * @idx: position to insert
 * @n: data
 * Return: node insert.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *j, *corrent = *h;
	size_t i = 0;

	j = malloc(sizeof(dlistint_t));
	if (j == NULL)
		return (NULL);
	j->n = n;
	j->next = NULL;
	j->prev = NULL;
	if (*h == NULL)
	{
		*h = j;
		return (j);
	}
	if (idx == 0)
	{
		(*h)->prev = j, j->next = *h, *h = j;
		return (j);
	}
	else
	{
		for (i = 1; corrent; i++)
		{
			if (idx == i && corrent->next != NULL)
			{
				j->prev = corrent, j->next = corrent->next;
				corrent->next->prev = j;
				corrent->next = j;
				return (j);
			}
			else if (idx == i && corrent->next == NULL)
			{
				corrent->next = j, j->prev = corrent;
				return (j);
			}
			corrent = corrent->next;
		}
	}
	free(j);
	return (NULL);
}
