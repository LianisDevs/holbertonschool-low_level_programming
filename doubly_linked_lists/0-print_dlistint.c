#include <stdio.h>
#include "lists.h"

size_t *print_dlistint_rec(const dlistint_t *h, size_t *num_nodes);

/**
 * print_dlistint - prints all elements in double linked list
 * @h: pointer to head of list
 * Return: nothing/ void
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t num_nodes = 0;

	if (h == NULL)
		return (0);

	print_dlistint_rec(h, &num_nodes);

	return (num_nodes);
}
/**
 * print_dlistint_rec - uses recursion to find the next node and print
 * @h: pointer to head of lsit
 * @num_nodes: pointer to count number of nodes printed
 * Return: number of nodes printed
 */
size_t *print_dlistint_rec(const dlistint_t *h, size_t *num_nodes)
{
	/*print current node n*/
	printf("%d\n", h->n);

	(*num_nodes)++;

	if (h->next != NULL)
		print_dlistint_rec(h->next, num_nodes);

	return (num_nodes);
}
