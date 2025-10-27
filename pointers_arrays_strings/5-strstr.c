#include "main.h"
#include <stdio.h>

/**
 * _strstr - searches string for substring
 * @haystack: pointer to string to be checked
 * @needle: pointer to substring to search for
 * Return: pointer to the beginning of located substring or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	char *h = haystack;
	char *temp_h;
	char *n;

	while (*haystack != '\0')
	{
		temp_h = h;
		n = needle;

		while (*n != '\0' && *temp_h != '\0' && *temp_h == *n)
		{
			temp_h++;
			n++;
		}
		if (*n == '\0')
		{
			return ((char *)h);
		}
		h++;
	}
	return (NULL);
}
