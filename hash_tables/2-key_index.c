#include <stdio.h>
#include "hash_tables.h"

/**
 * key_index - gives you the index of a key
 * @key: is the key
 * @size: size of teh array of the hash table
 * Return: index at which the key/value pair is stored in hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	/*we want to modulo by size to get an index within the table size*/
	return ((hash_djb2(key)) % size);
}
