#ifndef HASH_TABLES_H
#define HASH_TABLES_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * struct hash_node_s - Nodes Of Hash Tables.
 * @key: The Key, It is Unique in the Hash Table.
 * @value: The Value Corresponding to a Key.
 * @next: Ptr to the Next Node of the Lists.
 */
typedef struct hash_node_s
{
	char *key;
	char *value;
	struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash Table Data Structures.
 * @size: Array Size.
 * @array: An Array of size @size.
 * Cells of this Array is a Ptr to the 1st Node of Linked Lists For
 * HashTable Using Chaining Collision Handlings.
 */
typedef struct hash_table_s
{
	unsigned long int size;
	hash_node_t **array;
} hash_table_t;

hash_table_t *hash_table_create(unsigned long int size);
unsigned long int hash_djb2(const unsigned char *str);
unsigned long int key_index(const unsigned char *key, unsigned long int size);
int hash_table_set(hash_table_t *ht, const char *key, const char *value);
char *hash_table_get(const hash_table_t *ht, const char *key);
void hash_table_print(const hash_table_t *ht);
void hash_table_delete(hash_table_t *ht);

/**
 * struct shash_node_s - Node of Sorted Hash Tables.
 * @key: The key, It is Unique in the HashTables.
 * @value: The Value Corresponding to a Key.
 * @next: Ptr to Next Node of the List.
 * @sprev: Ptr to Previous Element of Sorted Linked Lists.
 * @snext: Ptr to Next Element of Sorted Linked Lists.
 */
typedef struct shash_node_s
{
	char *key;
	char *value;
	struct shash_node_s *next;
	struct shash_node_s *sprev;
	struct shash_node_s *snext;
} shash_node_t;

/**
 * struct shash_table_s - Sorted Hash Table Data Structures.
 * @size: Array Size.
 * @array: An Array of size @size.
 * Cells of This Array is a Ptr to the 1st Node of a Linked List For
 * HashTable Using Chaining Collision Handlings.
 * @shead: Ptr to 1st Element of Sorted Linked Lists.
 * @stail: Ptr to Last Element of Sorted Linked Lists.
 */
typedef struct shash_table_s
{
	unsigned long int size;
	shash_node_t **array;
	shash_node_t *shead;
	shash_node_t *stail;
} shash_table_t;

shash_table_t *shash_table_create(unsigned long int size);
int shash_table_set(shash_table_t *ht, const char *key, const char *value);
char *shash_table_get(const shash_table_t *ht, const char *key);
void shash_table_print(const shash_table_t *ht);
void shash_table_print_rev(const shash_table_t *ht);
void shash_table_delete(shash_table_t *ht);

#endif /* HASH_TABLES_H */
