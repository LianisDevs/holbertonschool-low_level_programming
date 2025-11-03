#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int length(char *s1, char *s2);

/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to new memory or NULL if failed
 */

char *str_concat(char *s1, char *s2)
{
	char *p;
	int size, i, j;

	if (s1 == NULL || s2 == NULL)
		return (NULL);

	size = length(s1, s2);

	p = malloc((size * sizeof(char)));

	/*check malloc success */
	if (p == NULL)
		return (NULL);

	/*loop through and copy elements to memory s1 then s2*/
	i = 0;
	while (s1[i] != '\0')
	{
		p[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		p[i] = s2[j];
		j++;
		i++;
	}

	/*add the null term at the end*/
	p[i] = s2[j];

	return (p);
}
/**
 * length - finds length of string
 * @s1: string 1
 * @s2: string 2
 * Return: length of strings added together - 1
 */

int length(char *s1, char *s2)
{
	int i, j, length;

	/*loop through to get length of both strings*/
	i = 0;
	while (s1[i] != '\0')
		i++;

	j = 0;
	while (s2[j] != '\0')
		j++;

	/*add lengths together -1 as we only need 1 \0 */
	length = ((i + j) - 1);

	return (length);
}
