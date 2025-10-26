#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies the string pointed to by src to the
 * buffer pointed to by dest
 * @dest: pointer to the destination where the string will be copied
 * @src: pointer to string
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;
	int counter = 0;

	while (*(src + counter) != '\0')
		counter++;

	for (i = 0; i < counter + 1; i++)
		dest[i] = src[i];
	return (dest);
}
