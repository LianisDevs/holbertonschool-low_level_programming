#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: pointer to head of list
 * Return: nothing/ void
 */
void free_list(list_t *head)
{
	list_t *temp = head;

	/*base case*/
	if (temp == NULL)
		return;

	/*recursive call*/
	free_list(temp->next);

	/*free str as we malloced this */
	free(temp->str);

	free(head);

	head = NULL;
}
