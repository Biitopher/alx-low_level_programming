#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table.
 * @size: Array size
 *
 * Return: pointer to newly created hash table, else NULL
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int x;
	hash_table_t *table;

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
	{
		return (NULL);
	}
	table->size = size;
	table->array = malloc(sizeof(hash_node_t *) * size);

	if (table->array == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < size; x++)
		table->array[x] = NULL;
	return (table);
}
