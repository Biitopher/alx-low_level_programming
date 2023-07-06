#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table.
 * @size: Array size
 *
 * Return: pointer to newly created hash table, else NULL
 */

typedef struct
{
	hash_table_t;
}

hash_table_t *hash_table_create(unsigned long int size)
{
	 hash_table_t *table = (hash_table_t *)malloc(sizeof(hash_table_t));
	 if (table == NULL)
	 {
		 return NULL;
	 }
	 return table;
}

int main()
{
    unsigned long int size = 100;
    hash_table_t *table = hash_table_create(size);

    if (table == NULL) {
        printf("Failed to create hash table\n");
        return 1;
    }
    free(table);

    return 0;
}
