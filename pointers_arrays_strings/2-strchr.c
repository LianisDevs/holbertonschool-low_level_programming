#include "main.h"
#include <stdio.h>

/**
 * _strchr - locates character in string
 * @s: Pointer to string
 * @c: Character to locate
 * Return: pointer to 1st occurence of c or NULL if not found
 */

char *_strchr(char *s, char c)
{
	if (c == '\0')
		return (c);
	
	while (*s != '\0')
	{
		if (*s == c)
			return ((char *)s);
	s++;
	}
	return (NULL);
}
