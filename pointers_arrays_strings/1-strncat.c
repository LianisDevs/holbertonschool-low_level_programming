#include "main.h"
#include <stdio.h>
/**
 * _strncat - concatenates two strings
 * @dest: pointer to the destination where the string will be added to the end
 * @src: pointer to string
 * @n: if given it's the amount to concate
 * Return: the pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int dest_counter = 0;
	int dest_length = 0;
	int src_counter = 0;
	/**
	 * find src length to know when to finish adding the string
	 * Find the end of dest
	 * going from the end of dest, add the character
	 * of src until we reach src == '\0'
	 * return dest
	*/
	while (src[src_counter] != '\0')
		src_counter++;

	while (dest[dest_counter] != '\0')
		dest_counter++;

	dest_length = dest_counter + src_counter;

	if (n < dest_length)
	{
		for (i = 0; i < n; i++)
		{
			dest[dest_counter] = src[i];
			dest_counter++;
		}
	}
	else
	{
		for (i = 0; i < dest_length; i++)
		{
			dest[dest_counter] = src[i];
			dest_counter++;
		}

	}
	return (dest);
}
