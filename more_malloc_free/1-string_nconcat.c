#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int length(char *s);

/**
 * string_nconcat - concatenates 2 strs in new mem copy only n elements of s2
 * @s1: string 1
 * @s2: string 2
 * @n: number of elements to copy from s2
 * Return: pointer to new memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int size, s1_size, s2_size, i, j;

	s1_size = length(s1);
	s2_size = length(s2);

	if (n >= s2_size)
		n = s2_size;

	size = s1_size + s2_size;

	p = malloc((size + 1) * sizeof(char));
	/*check malloc successful*/
	if (p == NULL)
		return (NULL);

	/*loop through and copy elements from both string to new mem*/
	i = 0;
	while (s1[i] != '\0')
	{
		p[i] = s1[i];
		i++;
	}
	/*comparing j to n to make sure we only copy n elements of s2*/
	j = 0;
	while (j < n)
	{
		p[i] = s2[j];
		j++;
		i++;
	}

	/*Add the null term at the end of mem*/
	p[i] = '\0';

	return (p);
}

/**
 * length - counts length of string
 * @s: pointer to string
 * Return: string length
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
