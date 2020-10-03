#include "hash_tables.h"

/**
 * hash_table_print - print hash table like a dic
 * @ht: hash table
 *
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	const hash_table_t *slots = ht;
	hash_node_t *current;
	unsigned long int index, a = 0;

	if (!slots)
		return;
	printf("{");
	for (index = 0; index < slots->size; index++)
	{
		current = slots->array[index];

		if ((a > 0) && (current))
			printf(", ");
		while (current)
		{
			printf("'%s': '%s'", current->key, current->value);
			i++;
			if (current->next)
				printf(", ");
			current = current->next;
		}
	}
	printf("}\n");
}
