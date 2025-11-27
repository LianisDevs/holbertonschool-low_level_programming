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
	dlistint_t *temp = head;
	unsigned int num_elements = 0;

	if (head == NULL)
		return (NULL);

	while (temp->next != NULL)
	{
		/*checking if index and num_elements match and return that node*/
		if (index == num_elements)
			return (temp);

		/*move to next node and increment num_elements*/
		temp = temp->next;
		num_elements++;
	}

	return (NULL);
}
