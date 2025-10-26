#include "main.h"
#include <stdio.h>
/**
 * _strcat - concatenates two strings
 * @dest: pointer to the destination where the string will be added to the end
 * @src: pointer to string
 * Return: the pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int src_counter = 0;
	int dest_counter = 0;

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

	for (i = 0; i < src_counter; i++)
	{
		dest[dest_counter] = src[i];
		dest_counter++;
	}
	return (dest);
}
