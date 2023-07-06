#include "hash_tables.h"

/**
 * hash_table_print  - function that prints a hash table.
 * @ht: hash table
 *
 * Return: value in array order, else NULL
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t  *table;
	int not_fin = 0;
   unsigned long int x = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (x = 0; x < ht->size; x++)
	{
		table = ht->array[x];
		while (table)
		{
			if (not_fin)
				printf(", ");
			printf("'%s': '%s'", table->key, table->value);
			not_fin = 1;
			table = table->next;
		}
	}
		printf("}\n");
}
	
