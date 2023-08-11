#include "hash_tables.h"

/**
 ** key_index - It gives the index of a key
 ** @key: It is the key to get index for
 ** @size: It is the size of the hash table
 ** Return: It returns the index for the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
