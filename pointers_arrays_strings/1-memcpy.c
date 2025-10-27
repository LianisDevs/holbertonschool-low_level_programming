#include "main.h"
#include <stdio.h>

/**
 * _memcpy - copies memory area
 * @dest: pointer to memory area to be filled
 * @src: pointer to where the values will be copied from
 * @n: number of bytes to copy
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	if (n == 0)
		return (dest);

	while (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			dest[i] = src[i];
		}
		n--;
	}
	return (dest);
}
