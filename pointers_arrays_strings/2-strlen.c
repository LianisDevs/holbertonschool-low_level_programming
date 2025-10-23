#include "main.h"
/**
 * _strlen - counts length of string
 * @s: string to count
 *
 * Return: returns length
 */

int _strlen(char *s)
{
	int counter = 0;

	while (*(s + counter) != '\0')
	{

		counter++;
	}
	return (counter);
}
