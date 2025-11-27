#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

dlistint_t *node_setup(const int n, dlistint_t *new_node, dlistint_t *temp);

/**
 * add_dnodeint_end - add node to end of doubly linked list
 * @head: pointer to the head
 * @n: value to add within new node
 * Return: pointer to head
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	dlistint_t *temp = *head;

	if (new_node == NULL)
		return (NULL);

	/*
	 * if head is null then head needs to be set to the new node
	 * so we have a head pointer if we continue to add to this node
	 */
	if (*head == NULL)
	{
		*head = node_setup(n, new_node, temp);
		return (new_node);
	}

	while (temp->next != NULL)
		temp = temp->next;

	/*
	 * update head to be new node
	 * node_setup returns the new node
	 */
	node_setup(n, new_node, temp);
	return (new_node);
}

/**
 * node_setup - sets up the elements of the new node
 * @temp: copy of head which is a pointer to start of list
 * @n: int value to add to new node
 * @new_node: pointer to new node
 * Return: pointer to new node
 */

dlistint_t *node_setup(const int n, dlistint_t *new_node, dlistint_t *temp)
{
	new_node->n = n;
	new_node->next = NULL;
	if (temp == NULL)
		new_node->prev = NULL;
	else
	{
		new_node->prev = temp;
		new_node->prev->next = new_node;
	}

	return (new_node);
}
