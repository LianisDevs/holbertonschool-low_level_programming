#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

int delete_at_start_list(dlistint_t *temp, dlistint_t **head);
int delete_at_start_emptylist(dlistint_t **head);
int delete_at_index(dlistint_t *temp);
int delete_at_end(dlistint_t *temp);

/**
 * delete_dnodeint_at_index - deletes the node at index in doubly linked list
 * @head: pointer to head
 * @index: index is the node to delete
 * Return: 1 if succesful -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int num_nodes = 0;
	dlistint_t *temp = *head;

	if (*head == NULL)
		return (-1);

	/*if deleting at start and the list isn't empty*/
	if (index == 0 && temp->next != NULL)
		return (delete_at_start_list(temp, head));

	/*if deleting at start and list is empty*/
	if (index == 0)
		return (delete_at_start_emptylist(head));

	/*checking for index in list*/
	while (num_nodes < index && temp != NULL)
	{
		temp = temp->next;
		num_nodes++;
	}

	/*check to see if index wasn't found and return to reduce wasted time*/
	if (num_nodes != index || temp == NULL)
		return (-1);

	/*check if deleting at end*/
	if (num_nodes == index && temp->next == NULL)
		return (delete_at_end(temp));

	/*check if deleting in the somewhere idn middle zone*/
	if (num_nodes == index)
		return (delete_at_index(temp));

	return (-1);
}

/**
 * delete_at_start_list - deletes node at start
 * @temp: at indexed position for node to delete
 * @head: pointer to head
 * Return: 1 for success
 */
int delete_at_start_list(dlistint_t *temp, dlistint_t **head)
{
	temp->next->prev = NULL;
	*head = temp->next;
	free(temp);
	temp = NULL;
	return (1);
}

/**
 * delete_at_start_emptylist - deletes node at start of empty list
 * @head: pointer to head
 * Return: 1 for success
 */
int delete_at_start_emptylist(dlistint_t **head)
{
	free(*head);
	*head = NULL;
	return (1);
}

/**
 * delete_at_end - deletes node at end
 * @temp: at indexed position for node to delete
 * Return: 1 for success
 */
int delete_at_end(dlistint_t *temp)
{
	temp->prev->next = NULL;
	free(temp);
	temp = NULL;
	return (1);
}
/**
 * delete_at_index - deletes node at index
 * @temp: at indexed position for node to delete
 * Return: 1 for success
 */
int delete_at_index(dlistint_t *temp)
{
	/*prev needs to be temp*/
	temp->prev->next = temp->next;
	/*next needs to be temp*/
	temp->next->prev = temp->prev;
	free(temp);
	temp = NULL;
	return (1);
}
