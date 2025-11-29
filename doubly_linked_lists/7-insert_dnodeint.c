#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

dlistint_t *node_setup_at_index(dlistint_t *temp, int n, dlistint_t *new_node);

/**
 * insert_dnodeint_at_index - inserts new node at index position
 * @h: pointer to head
 * @idx: index of the list where the node should be added
 * @n: number to add to new node
 * Return: pointer to new node or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int num_elements = 0;
	dlistint_t *temp = *h;

	/*
	 * if idx is 0 we don't need to check anything else
	 * since this task is compiled with both files:
	 * 2-add_dnodeint.c and 3-add_dnodeint_end.c
	 * using the function from 2 to add and setup the new node
	 */
	if (*h == NULL || idx == 0)
		return (add_dnodeint(h, n));

	/*
	 * traversing through the list comparing num_elements to idx
	 * to look for a match or until temp is at the end of the list
	 */
	while (num_elements < idx && temp != NULL)
	{
		temp = temp->next;
		num_elements++;
	}

	if (num_elements != idx)
		return (NULL);

	if (temp == NULL)
		return (add_dnodeint_end(h, n));

	if (num_elements == idx)
	{
		dlistint_t *new_node = malloc(sizeof(dlistint_t));

		if (new_node == NULL)
			return (NULL);

		return (node_setup_at_index(temp, n, new_node));
	}
	return (NULL);
}

/**
 * node_setup_at_index - sets up new node at index position
 * @temp: copy of head now traaversed to the correct index
 * @n: number to add to new node
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
