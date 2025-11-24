#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

list_t *node_setup(list_t **head, const char *str, list_t *new_node);
unsigned int calc_len(const char *str);

/**
 * add_node - adds a new node at the beginning of the list
 * @head: pointer to the first node in the list
 * @str: pointer to string
 * Return: pointer to head
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	node_setup(head, str, new_node);

	/*update head to be the new_node so it's first*/
	*head = new_node;

	return (new_node);
}

/**
 * node_setup - sets up the elements of the new node
 * @head: pointer to the first node in the list
 * @str: pointer to string to add to new node
 * @new_node: pointer to new_node
 * Return: pointer to new node
 */
list_t *node_setup(list_t **head, const char *str, list_t *new_node)
{
	new_node->str = strdup(str);

	/*checking that strdup auto malloc worked */
	if (new_node->str == NULL)
		return (NULL);

	/*calls calc_len function to add length of str to new node*/
	new_node->len = calc_len(str);

	/*head is now next in new_node this connects new node to the list*/
	new_node->next = *head;

	return (new_node);
}

/**
 * calc_len - counts length of str
 * @str: pointer to string to count length of
 * Return: length of str
 */
unsigned int calc_len(const char *str)
{
	unsigned int length = 0;

	/* while str and str[length] are not false values length++*/
	while (str && str[length])
		length++;

	return (length);
}
