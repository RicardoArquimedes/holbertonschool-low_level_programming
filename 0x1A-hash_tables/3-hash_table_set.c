#include "hash_tables.h"
hash_node_t *create_node(const char *key, const char *value);

/**
 * hash_table_set - Add a new element to the hash table
 * @ht: hash table
 * @key: key
 * @value: is the value associated with the key
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_table_t *slots = ht;
	hash_node_t *node, *current;
	unsigned long int a;

	if (!slots)
		return (0);
	if (!key)
		return (0);
	if (!(strcmp(key, "")))
		return (0);
	node = create_node(key, value);
	if (node == NULL)
		return (0);
	a = key_index((unsigned char *)key, slots->size);
	if (slots->array[a] == NULL)
	{
		node->next = NULL;
	}
	else
	{
		current = slots->array[a];
		while (current)
		{
			if (!(strcmp(current->key, key)))
			{
				free(current->value);
				current->value = strdup(value);
				free(node->key);
				free(node->value);
				free(node);
				return (1);
			}
			current = current->next;
		}
		current = slots->array[a];
		node->next = current;
	}
	slots->array[a] = node;
	return (1);
}
/**
 * create_node - This create new nodes
 *
 * @key: key of the dic
 * @value: is the value associated with the key
 *
 * Return: new node
 *
*/
hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *node;

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (NULL);
	node->key = strdup(key);
	node->value = strdup(value);
	return (node);
}
