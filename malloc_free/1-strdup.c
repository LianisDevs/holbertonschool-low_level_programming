#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - copies string and adds to new memory
 * @str: string
 * Return: pointer to new sapce in memory or NULL if failed
 */

char *_strdup(char *str)
{
	char *p;
	int i;

	if (str == NULL)
		return (NULL);

	/*looping through str to get length*/
	i = 0;
	while (str[i] != '\0')
		i++;

	p = malloc((i + 1) * sizeof(char));

	/*always check after using Malloc is it failed*/
	if (p == NULL)
		return (NULL);

	/*loop through and copy elements to new memory*/
	i = 0;
	while (str[i] != '\0')
	{
		p[i] = str[i];
		i++;
	}

	/*add the null term to the end*/
	p[i] = str[i];

	return (p);
}

