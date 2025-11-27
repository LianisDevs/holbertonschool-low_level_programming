#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - free doubly linked list
 * @head: pointer to first node
 * Return: nothing/ void
 */
void free_dlistint(dlistint_t *head)
{
	/*base case- if the list is empty return*/
	if (head == NULL)
		return;
	/*recursive call*/
	free_dlistint(head->next);

	free(head);
	/*avoding floating pointer by setting to NULL*/
	head = NULL;
}
