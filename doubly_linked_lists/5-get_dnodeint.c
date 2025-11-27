#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - finds the nth node of a doubly linked list
 * @head: pointer to first node
 * @index: nth node to search for
 * Return: nth node or NULL if it doesn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int num_elements = 0;

	/*
	 * checking while num_elements < index it'll either match
	 * or increment through to last node therefore == NULL
	 * by doing it this way when we return head it will
	 * either be the index or it will be NULL
	 */
	while (num_elements < index && head != NULL)
	{
		/*move to next node and increment num_elements*/
		head = head->next;
		num_elements++;
	}
	return (head);
}
