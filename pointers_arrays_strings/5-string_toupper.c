#include "main.h"
#include <stdio.h>

/**
 * string_toupper - changes all lowercase letters in string to upper
 * @string: pointer to string
 * Return: pointer to updated string
 */

char *string_toupper(char *string)
{
	int i = 0;

	while (string[i])
	{
		if (string[i] >= 97 && string[i] <= 122)
		{
			string[i] = string[i] - 32;
		}
		i++;
	}
	return (string);
}
