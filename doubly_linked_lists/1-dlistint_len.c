#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - counts number of elements in a linked list
 * @h: pointer to first element in node
 * Return: number of elements in list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t num_elements;

	if (h == NULL)
		return (0);
	/*if h != NULL then there's at least 1 elemement so num_elements is set to 1*/
	num_elements = 1;
	while (h->next != NULL)
	{
		num_elements++;
		h = h->next;
	}

	return (num_elements);
}
