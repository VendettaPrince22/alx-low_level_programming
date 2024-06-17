#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_create - Creates a hash table
 *
 * @size: the size of the array
 *
 * Return: a pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;
	hash_node_t **array_new;

	new_table = malloc(sizeof(hash_table_t));
	if (new_table == NULL)
	{
		return (NULL);
	}
	array_new = malloc(sizeof(hash_node_t) * size);
	if (array_new == NULL)
	{
		return (NULL);
	}

	*array_new = NULL;

	new_table->size = size;
	new_table->array = array_new;

	return (new_table);
}
