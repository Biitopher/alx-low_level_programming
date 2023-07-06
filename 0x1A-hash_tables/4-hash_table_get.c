#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value associated with a key
 * @ht: table being looked into
 * @key: key being looked for
 *
 * Return: value associated with element, else NULL
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *new_node;

	if (!ht || !key || !*key)
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);
	new_node = ht->array[idx];

	while (new_node)
	{
		if (!strcmp(key, new_node->key))
			return (new_node->value);
		new_node = new_node->next;
	}
	return (NULL);
}
