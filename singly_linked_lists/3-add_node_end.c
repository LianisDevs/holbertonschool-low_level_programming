#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

list_t *node_setup(const char *str, list_t *new_node);
unsigned int calc_len(const char *str);

/**
 * add_node_end - add new node at the end of the linked list
 * @head: pointer to head of list
 * @str: pointer to string to add to new node
 * Return: pointer to new element or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

	/*
	 * need a temp version of head so we can move through the list
	 * but still know where the start (head) of the list is
	 */
	list_t *temp = *head;

	if (new_node == NULL)
		return (NULL);

	node_setup(str, new_node);

	/*check if head is empty and sets new node to be the head*/
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	else
	{
		while (temp->next != NULL)
			temp = (temp)->next;

		temp->next = new_node;
	}
	return (new_node);
}

/**
 * node_setup - sets up the elements of the new node
 * @str: pointer to string to add to new node
 * @new_node: pointer to new_node
 * Return: pointer to new node
 */
list_t *node_setup(const char *str, list_t *new_node)
{
	new_node->str = strdup(str);

	/*checking strdup auto malloc worked*/
	if (new_node->str == NULL)
		return (NULL);

	/*calls calc_len to add length of string to new node*/
	new_node->len = calc_len(str);

	/*this is now the last node so next is set to NULL*/
	new_node->next = NULL;

	return (new_node);
}

/**
 * calc_len - counts length of string
 * @str: pointer to string to count length of
 * Return: length of string
 */
unsigned int calc_len(const char *str)
{
	unsigned int length = 0;

	/*while str and str[length] are not false values length++*/
	while (str && str[length])
		length++;

	return (length);
}
