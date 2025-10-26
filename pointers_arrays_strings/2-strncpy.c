#include "main.h"
#include <stdio.h>
/**
 * _strncpy - copies a string
 * @dest: pointer to the destination where the string will be copied to
 * @src: pointer to string
 * @n: if given it's the amount to copy
 * Return: the pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int dest_counter = 0;
	int src_counter = 0;

	while (src[src_counter] != '\0')
		src_counter++;

	while (dest[dest_counter] != '\0')
		dest_counter++;

	if (n > src_counter)
	{
		for (i = 0; i < src_counter; i++)
		{
			dest[i] = src[i];
		}
		for (i = src_counter; i < n; i++)
		{
			dest[i] = '\0';
		}
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			dest[i] = src[i];
			dest_counter++;
		}
	}
	return (dest);
}
