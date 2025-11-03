#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates array of chars and initializes with char
 * @size: size of array
 * @c: char to initialize with
 * Return: pointer to array or null if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size <= 0)
		return (NULL);

	/*size + 1 to add the \0 at the end*/
	p = malloc((size + 1) * sizeof(char));

	i = 0;
	while (i <= size)
	{
		p[i] = c;
		i++;
	}
	/*just size because it's 0 indexed so the 5th element is the 6th*/
	p[size]  = '\0';

	return (p);

}
