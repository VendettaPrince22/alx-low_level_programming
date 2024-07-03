#include "hash_tables.h"

/**
 * key_index - gives the index of a key
 * @key: key to get
 * @size: size of the array of the hash table
 *
 * Return: index where key/value pair is stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int my_key;

	my_key = hash_djb2(key) % size;

	return (my_key);
}
