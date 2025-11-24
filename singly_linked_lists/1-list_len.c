#include <stdio.h>
#include "lists.h"

/**
 * list_len - counts number of elements in a linked list
 * @h: pointer to head of linked list
 * Return: number of elements in linked list
 */

size_t list_len(const list_t *h)
{
	size_t num_elements;

	if (h == NULL)
		return (0);

	/*if h != NULL then there's at least 1 element so num_elements set to 1*/
	num_elements = 1;
	while (h->next != NULL)
	{
		num_elements++;
		h = h->next;
	}
	return (num_elements);
}
