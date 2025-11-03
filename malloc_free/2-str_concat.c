#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int length(char *s);

/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to new memory or NULL if failed
 */

char *str_concat(char *s1, char *s2)
{
	char *p;
	int size, s1_size, s2_size, i, j;

	if (s1 == NULL && s2 == NULL)
		return (NULL);

	s1_size = length(s1);
	s2_size = length(s2);

	size = s1_size + s2_size;

	p = malloc(((size + 1) * sizeof(char)));

	/*check malloc success */
	if (p == NULL)
		return (NULL);

	/*loop through and copy elements to memory s1 then s2*/
	i = 0;
	while (s1_size != 0 && s1[i] != '\0')
	{
		p[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2_size != 0 && s2[j] != '\0')
	{
		p[i] = s2[j];
		j++;
		i++;
	}

	/*add the null term at the end*/
	p[i] = '\0';

	return (p);
}
/**
 * length - finds length of string
 * @s: string 1
 * Return: length of string
 */

int length(char *s)
{
	int i;

	if (s == 0)
		return (0);

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
