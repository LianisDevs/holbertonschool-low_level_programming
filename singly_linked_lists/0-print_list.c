#include <stdio.h>
#include <stddef.h>
#include "lists.h"

size_t *print_list_rec(const list_t *h, size_t *numnodes);

/**
 * print_list - prints all the elements of a list
 * @h: pointer to list to print
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t num_nodes = 0;

	if (h == NULL)
		return (1);

	print_list_rec(h, &num_nodes);

	return (num_nodes);
}

/**
 * print_list_rec - uses recursion to find the next node and print
 * @h: pointer to first node
 * @numnodes: pointer to number
 * Return: number of nodes printed
 */
size_t *print_list_rec(const list_t *h, size_t *numnodes)
{
	/*check if h->string is NULL and specify what to print instead */
	if (h->str == NULL)
		printf("[0] (nil)\n");

	else
		printf("[%d] %s\n", h->len, h->str);

	/*increment num,nodes after printing*/
	(*numnodes)++;

	/*exit condition for recursive function*/
	if (h->next != NULL)
		print_list_rec(h->next, numnodes);

	return (numnodes);
}
