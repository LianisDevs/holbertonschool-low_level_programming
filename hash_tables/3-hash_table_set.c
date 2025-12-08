#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

int setup(const char *key, const char *value, hash_node_t *new_node);
/**
 * hash_table_set - adds an element to the hash table
 * @ht: pointer to hashtable to add to
 * @key: key is the key
 * @value: value associated with the key
 * Return: 1 if success or 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;

	/*malloc new_node and check it was successful*/
	hash_node_t *new_node = malloc(sizeof(hash_node_t));

	if (new_node == NULL)
		return (0);

	/*checking if setup functrion failed for fast return*/
	if (setup(key, value, new_node) == 1)
		return (0);

	/*get the key_index*/
	index = key_index((const unsigned char *)key, ht->size);

	/*if nothing at index position then add new node*/
	if (ht->array[index] == NULL)
		ht->array[index] = new_node;

	/*if index position already has a node then add new_node to front of list*/
	else
	{
		new_node->next = ht->array[index];
		ht->array[index] = new_node;
	}
	return (1);
}

/**
 * setup - sets up new node
 * @key: key is the key
 * @value: value associated with key
 * @new_node: pointer to new node
 * Return: 0 on success 1 for failure
 */
int setup(const char *key, const char *value, hash_node_t *new_node)
{
	/*using strdup to copy and malloc key and value*/
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (1);
	}

	if (value == NULL)
		new_node->value = NULL;
	else
	{
		new_node->value = strdup(value);
		if (new_node->value == NULL)
		{
			free(new_node->key);
			free(new_node);
			return (1);
		}
	}
	new_node->next = NULL;
	return (0);
}
