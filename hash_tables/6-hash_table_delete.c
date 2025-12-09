#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table
 * Return: nothing/void
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index = 0;
	hash_node_t *temp, *current;

	if (ht == NULL)
		return;

	while (index < ht->size)
	{
		temp = ht->array[index];

		while (temp != NULL)
		{
			/*
			 * storing temp->next in current so we can free
			 * temp without losing next element
			 */
			current = temp->next;

			free(temp->value);

			free(temp->key);

			free(temp);

			/*setting temp to current which has next*/
			temp = current;
		}
		index++;
	}
	free(ht->array);
	free(ht);
	ht = NULL;
}
