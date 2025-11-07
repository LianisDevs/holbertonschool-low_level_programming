#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: Number of elements
 * @size: size of the elements
 * Return: pointer to allocated memory or null if it failed
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i, length;

	if (nmemb == 0 || size == 0)
		return (NULL);

	length = nmemb * size;

	/*allocate memory with malloc*/
	p = malloc(length);

	/*check malloc worked*/
	if (p == NULL)
		return (NULL);

	/*initialize all elements in array to zero*/
	i = 0;
	while (i < length)
	{
		p[i] = 0;
		i++;
	}
	return (p);
}
