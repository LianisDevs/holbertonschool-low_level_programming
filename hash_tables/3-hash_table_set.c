#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

hash_node_t *setup(const char *key, const char *value);
int key_same(const char *value, hash_table_t *ht, unsigned long int index);
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
	hash_node_t *new_node;

	if (ht == NULL)
		return (0);

	/*get the key_index*/
	index = key_index((const unsigned char *)key, ht->size);

	/*checking if key exists already*/
	if (ht->array[index] != NULL && ht->array[index]->key == key)
		return (key_same(value, ht, index));

	new_node = setup(key, value);

	/*checking if setup function failed for fast return*/
	if (new_node == NULL)
		return (0);

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
 * Return: new_node or NULL on error
 */
hash_node_t *setup(const char *key, const char *value)
{
	/*malloc new_node and check it was successful*/
	hash_node_t *new_node = malloc(sizeof(hash_node_t));

	if (new_node == NULL)
		return (NULL);

	/*using strdup to copy and malloc key and value*/
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (NULL);
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
			return (NULL);
		}
	}
	new_node->next = NULL;
	return (new_node);
}

/**
 * key_same - updates value to new value
 * @value: value associated with key
 * @ht: hash table
 * @index: index position in array
 * Return: nothing/ void
 */
int key_same(const char *value, hash_table_t *ht, unsigned long int index)
{
	/*need to clear current value then set new value*/
	free(ht->array[index]->value);
	ht->array[index]->value = strdup(value);
	return (1);
}
