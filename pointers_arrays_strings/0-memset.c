#include "main.h"
#include <stdio.h>
/**
 * _memset - fills memory with a constant byte
 * @s: pointer to memory area to be filled
 * @b: the value to set
 * @n: number of bytes to be filled
 * Return: s (pointer to the memory area)
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	if (n == 0)
		return (s);

	while (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			s[i] = b;
		}
		n--;
	}
	return (s);
}
