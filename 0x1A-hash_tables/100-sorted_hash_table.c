#include "hash_tables.h"

/**
 * shash_table_create - function that creates a hash table.
 * @size: Array size
 *
 * Return: pointer to newly created shash table, else NULL
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	unsigned long int x;
	shash_table_t *table;

	table = malloc(sizeof(shash_table_t));

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
	table->shead = NULL;
	table->stail = NULL;
	return (table);
}

/**
 * shash_table_set - function that adds an element to the hash table.
 * @ht: hash table to be added or updated
 * @value: value associated with the key
 * @key: key
 *
 * Return: 1 on success, 0 on fail
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new, *temp;
	char *copy_value;
	unsigned long int idx;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	copy_value = strdup(value);
	if (copy_value == NULL)
		return (0);
	idx = key_index((const unsigned char *)key, ht->size);
	temp = ht->shead;
	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = copy_value;
			return (1);
		}
		temp = temp->snext;
	}
	new = malloc(sizeof(shash_node_t));
	if (new == NULL)
	{
		free(copy_value);
		return (0);
	}
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(copy_value);
		free(new);
		return (0);
	}
	new->value = copy_value;
	new->next = ht->array[idx];
	ht->array[idx] = new;
	if (ht->shead == NULL)
	{
		new->sprev = NULL;
		new->snext = NULL;
		ht->shead = new;
		ht->stail = new;
	}
	else if (strcmp(ht->shead->key, key) > 0)
	{
		new->sprev = NULL;
		new->snext = ht->shead;
		ht->shead->sprev = new;
		ht->shead = new;
	}
	else
	{
		temp = ht->shead;
		while (temp->snext != NULL && strcmp(temp->snext->key, key) < 0)
			temp = temp->snext;
		new->sprev = temp;
		new->snext = temp->snext;
		if (temp->snext == NULL)
			ht->stail = new;
		else
			temp->snext->sprev = new;
		temp->snext = new;
	}
	return (1);
}


/**
 * shash_table_get - function that retrieves a value associated with a key
 * @ht: table being looked into
 * @key: key being looked for
 *
 * Return: value associated with element, else NULL
 */

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int idx;
	shash_node_t *new_node;

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


/**
 * shash_table_print  - function that prints a hash table.
 * @ht: shash table
 *
 * Return: value in array order, else NULL
 */

void shash_table_print(const shash_table_t *ht)
{
	shash_node_t  *table;
	int not_fin = 0;

	if (ht == NULL)
		return;
	table = ht->shead;
	printf("{");
	while (table)
	{
		if (not_fin)
			printf(", ");
		printf("'%s': '%s'", table->key, table->value);
		not_fin = 1;
		table = table->next;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - function that prints a hash table.
 * @ht: hash table
 *
 * Return: value in array order, else NULL
 */

void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t  *table;
	int not_fin = 0;

	if (ht == NULL)
		return;
	table = ht->stail;
	printf("{");
	while (table)
	{
		if (not_fin)
			printf(", ");
		printf("'%s': '%s'", table->key, table->value);
		not_fin = 1;
		table = table->next;
	}
	printf("}\n");
}


/**
 * shash_table_delete - function that deletes a shash table.
 * @ht: shash table
 *
 * Return: Nothing
 */

void shash_table_delete(shash_table_t *ht)
{
	shash_table_t *head = ht;
	shash_node_t *node, *temp;

	if (ht == NULL)
		return;
	node = ht->shead;
	while (node)
	{
		temp = node->next;
		free(node->key);
		free(node->value);
		free(node);
		node = temp;
	}
	free(head->array);
	free(head);
}
