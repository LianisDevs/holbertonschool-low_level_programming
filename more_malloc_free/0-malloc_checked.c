#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: size of memory
 * Return: pointer to memory, if malloc failes status value 98
 */

void *malloc_checked(unsigned int b)
{
	int *p;

	if (b <= 0)
		return (NULL);
	/*allocate memory*/
	p = malloc(b * sizeof(unsigned int));

	/*check malloc worked... if not exit status value*/
	if (p == NULL)
		exit(98);
	return (p);
}
