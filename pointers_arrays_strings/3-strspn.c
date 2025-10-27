#include "main.h"
#include <stdio.h>

/**
 * _strspn - gets length of a prefix substring
 * @s: pointer to string to be checked
 * @accept: pointer to string with the characters to accept
 * Return: number of bytes in s that contains accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	int counter = 0;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				counter++;
				break;
			}
			else if (s[i] != accept[j] && accept[j + 1] == '\0')
				return (counter);
			j++;
		}
		i++;
	}
	return (counter);
}

