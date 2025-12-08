#include <stdio.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hash table to check
 * @key: key we're looking for
 * Return: value associated with element or NULL if key couldn't be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	int key_check = 1;
	hash_node_t *temp;

	if (ht == NULL || key == NULL)
		return (NULL);

	/*get the key_index*/
	index = key_index((const unsigned char *)key, ht->size);

	/*checking if index is in array*/
	if (ht->array[index] == NULL)
		return (NULL);

	/*setting temp to be current index in array so we can traverse list*/
	temp = ht->array[index];

	while (temp != NULL)
	{
		/*checking if key is in array*/
		key_check = strcmp(ht->array[index]->key, key);

		if (key_check == 0)
			return (ht->array[index]->value);
		temp = temp->next;
	}
	return (NULL);
}
