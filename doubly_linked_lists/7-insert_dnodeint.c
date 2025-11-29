#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

dlistint_t *node_setup_at_index(dlistint_t *temp, int n, dlistint_t *new_node);
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to head
 * @idx: position to add new node at
 * @n: value to add in new node
 * Return: address of new node or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h;
	unsigned int num_elements = 0;

	while (num_elements < idx && temp != NULL)
	{
		temp = temp->next;
		num_elements++;
	}

	if (num_elements == idx || temp == NULL)
	{
		dlistint_t *new_node = malloc(sizeof(dlistint_t));

		if (new_node == NULL)
			return (NULL);
		return (node_setup_at_index(temp, n, new_node));
	}
	return (NULL);
}

/**
 * node_setup_at_index - sets up the new node at index position
 * @temp: copy of head that's now traversed to the index position
 * @n: value to add in new node
 * @new_node: pointer to new node
 * Return: pointer to new node
 */
dlistint_t *node_setup_at_index(dlistint_t *temp, int n, dlistint_t *new_node)
{
	new_node->n = n;

	if (temp == NULL)
	{
		new_node->next = NULL;
		new_node->prev = NULL;
	}
	else
	{
		new_node->next = temp;
		new_node->prev = temp->prev;
		new_node->next->prev = new_node;
		new_node->prev->next = new_node;
	}
	return (new_node);
}
