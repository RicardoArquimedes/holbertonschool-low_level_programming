#include "hash_tables.h"

/**
 * hash_table_get - Get the value according to the key
 * @ht: hash table
 * @key: key
 *
 * Return: value
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *current;
	char *value = NULL;
	unsigned long int index;

	if (!ht)
		return (NULL);
	if (!key)
		return (NULL);
	if (!(strlen(key)))
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];
	while (current)
	{
		if (!(strcmp(key, current->key)))
			value = strdup(current->value);
		current = current->next;
	}
	return (value);
}
