#ifndef _HASH_TABLES_H_
#define _HASH_TABLES_H_

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 ** struct hash_node_s - It is a Node of a hash table
 ** @key: It is the key, string
 ** It is the key is unique in the HashTable
 ** @value: It is the value corresponding to a key
 ** @next: It is a  pointer to the next node of the List
 */
typedef struct hash_node_s
{
	char *key;
	char *value;
	struct hash_node_s *next;
} hash_node_t;

/**
 ** struct hash_table_s - It is a Hash table data structure
 ** @size: It is the size of the array
 ** @array: It is an array of size @size
 * each cell of this array is a pointer to the first node of a linked list,
 ** this is because we want our HashTable to use a Chaining collision handling
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
 ** struct shash_node_s - It is the Node of a sorted hash table
 ** @key: It is the key, string
 ** It is the key is unique in the HashTable
 ** @value: It is the value corresponding to a key
 ** @next: It is a pointer to the next node of the List
 ** @sprev:It is a pointer to the previous element of the sorted linked list
 ** @snext:It is a pointer to the next element of the sorted linked list
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
 * struct shash_table_s - It is the Sorted hash table data structure
 * @size: It is the size of the array
 * @array: It is an array of size @size
 * each cell of this array is a pointer to the first node of a linked list,
 * that is because we want our HashTable to use a Chaining collision handling
 * @shead:It is a  pointer to the first element of the sorted linked list
 * @stail:It is a pointer to the last element of the sorted linked list
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

#endif /* _HASH_TABLES_H_ */
