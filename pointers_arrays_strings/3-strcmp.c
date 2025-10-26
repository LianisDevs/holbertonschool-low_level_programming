#include "main.h"
#include <stdio.h>
/**
 * _strcmp - compares 2 strings
 * @s1: string 1
 * @s2: string 2
 * Return: 0 if they're equal,
 * -1 if s1 < s2
 *  1 if s1 > s2
 */

int _strcmp(char *s1, char *s2)
{

	int i = 0;

	while (s1[i])
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
