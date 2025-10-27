#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - searches string for any of a set of bytes
 * @s: pointer to string to be checked
 * @accept: pointer to string with the characters to accept
 * Return: pointer to the 1st matching byte in s that contains accept or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				return ((char *)s + i);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}

