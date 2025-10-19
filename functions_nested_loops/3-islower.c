#include "main.h"
/**
 * _islower - checks for lowercase character
 * @c: The number to be checked
 *
 * Return: 1 if c is lowercase or 0 otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
