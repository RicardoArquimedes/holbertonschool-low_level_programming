#include "lists.h"
/**
 * delete_dnodeint_at_index - function that deletes the node
 * at index index of a dlistint_t linked list.
 * @head: address of head main
 * @index: position to delete
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = NULL, *current = *head;
	size_t i = 0;

	if (*head == NULL || head == NULL)
	{
		return (-1);
	}
	if (index == 0 && (*head)->next == NULL)
	{
		free(*head), *head = NULL;
		return (1);
	}
	if (index == 0)
	{
		tmp = *head, *head = (*head)->next, (*head)->prev = NULL, free(tmp);
		return (1);
	}
	else
	{
		for (i = 0; current; i++)
		{
			if (index == i && current->next != NULL)
			{
				tmp = current;
				current->prev->next = current->next;
				current->next->prev = current->prev;
				free(tmp);
				return (1);
			}
			else if (index == i && current->next == NULL)
			{
				tmp = current;
				current->prev->next = NULL;
				free(tmp);
				return (1);
			}
			current = current->next;
		}
	}
	return (-1);
}
