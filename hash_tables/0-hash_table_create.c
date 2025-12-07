#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size is the size of the array
 * Return: pointer to new hash table or NULL if failed
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *h_table = malloc(sizeof(hash_table_t));

	if (h_table == NULL)
		return (NULL);

	h_table->array = malloc(sizeof(hash_node_t) * size);

	if (h_table->array == NULL)
		return (NULL);

	return (h_table);
}
