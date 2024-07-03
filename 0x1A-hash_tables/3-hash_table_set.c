#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_set - adds an element to the hash table
 * @ht: the hash table to add to or update
 * @key: the key to add; cannot be empty
 * @value: the value associated  with the key; must be duplicated, can be empty
 *
 * Return: 1 on success; 0 on fail
 * In case of collision, add new node at beginning of the list
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node;
	unsigned long int h_val;
	const char *my_key;
	const char *my_value;

	h_val = key_index((const unsigned char *)key, ht->size);
	my_key = key;
	my_value = value;

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		return (0);
	}
	new_node->key = (char *)my_key;
	new_node->value = (char *)my_value;

	if (ht->array[h_val])
	{
		new_node->next = ht->array[h_val];
	}
	else
	{
		new_node->next = NULL;
	}
	ht->array[h_val] = new_node;

	return (1);
}
