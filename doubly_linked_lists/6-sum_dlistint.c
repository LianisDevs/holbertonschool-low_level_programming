#include <stdio.h>
#include "lists.h"

/**
 * sum_dlistint - counts the sum of all the data (n) in doubly linked list
 * @head: pointer to first node
 * Return: sum of data or 0 if list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);

}
