#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_print - prints hash table
 * @ht: hash table
 * Return: nothing/void
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index = 0;
	unsigned long int first = 1;
	hash_node_t *temp;

	if (ht == NULL)
		return;

	printf("{");

	while (index < ht->size)
	{
		temp = ht->array[index];

			while (temp != NULL)
			{
				/*checking if we're past the first to print the comma*/
				if (first == 0)
					printf(", ");

				printf("'%s': '%s'", temp->key, temp->value);

				temp = temp->next;

				/*setting first to be 0- after printing first*/
				first = 0;
			}
		index++;
	}
	printf("}\n");
}
