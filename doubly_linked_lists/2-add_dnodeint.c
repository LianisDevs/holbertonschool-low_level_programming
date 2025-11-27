#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

dlistint_t *node_setup(dlistint_t **head, const int n, dlistint_t *new_node);

/**
 * add_dnodeint - add a new node at the beginning of the list
 * @head: pointer to the first node in the list
 * @n: value to add within new node
 * Return: pointer to head
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	/*
	 * update head->prev to be the new node
	 * node_setup returns the new node
	 */
	*head = node_setup(head, n, new_node);

	return (new_node);
}

/**
 * node_setup - sets up the elements of the new node
 * @head: pointer to head of list
 * @n: int value to add to new node
 * @new_node: pointer to new node
 * Return: pointer to new node
 */

dlistint_t *node_setup(dlistint_t **head, const int n, dlistint_t *new_node)
{
	new_node->n = n;
	new_node->prev = NULL;

	new_node->next = *head;

	return (new_node);
}
