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
	while (*s != '\0')
	{
		if (*s == c)
			return ((char *)s);
	s++;
	}
	if (*s == c)
		return ((char *)s);

	return (NULL);
}
