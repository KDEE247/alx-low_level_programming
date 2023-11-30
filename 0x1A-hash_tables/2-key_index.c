#include "hash_tables.h"
/**
 * key_index - Get Index For Storing Key/value pair in array of a hash table.
 * @key: The Key to Get an Index.
 * @size: Array Size of Hash Table.
 * Return: The Index of the key used.
 * Description: Uses the djb2 Algorithm.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
