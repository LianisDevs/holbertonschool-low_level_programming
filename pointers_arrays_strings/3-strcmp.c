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

	int i;
	int s1_counter = 0;
	int s2_counter = 0;

	while (s1[s1_counter] != '\0')
		s1_counter++;

	while (s2[s2_counter] != '\0')
		s2_counter++;

	if (s1_counter < s2_counter)
		return (-1);
	else if (s1_counter > s2_counter)
		return (1);

	for (i = 0; i < s1_counter; i++)
	{
		if (s1[i] == s2[i])
			continue;
		else if (s1[i] < s2[i])
			return (-1);
		else
			return (1);
	}
	return (0);
}
