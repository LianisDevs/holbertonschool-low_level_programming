#include "main.h"
#include <stdio.h>

/**
 * cap_string - capitalizes all words of a string
 * @str: pointer to string
 * Return: pointer to updated string
 */

char *cap_string(char *str)
{
	int i, j;
	char sep[] = " \t,;.!?\"(){}\n";


	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[0] >= 97 && str[0] <= 122)
			str[i] = str[i] - 32;

		for (j = 0; sep[j] != '\0'; j++)
		{
			if (str[i - 1] == sep[j] && (str[i] >= 97 && str[i] <= 122))
				str[i] = str[i] - 32;
		}
	}
	return (str);
}
