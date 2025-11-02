#include "main.h"
#include <stdio.h>

/**
 * leet - encodes a string into 1337
 * @string: pointer to string to encode
 * Return: coded string
 */

char *leet(char *string)
{
	int i;
	int x;

	char cap [5] = {'A', 'E', 'O', 'T', 'L'};
	char low [5] = {'a', 'e', 'o', 't', 'l'};
	char code [5] = {'4', '3', '0', '7', '1'};

	x = 0;
	while (string[x] != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (string[x] == cap[i] || string[x] == low[i])
				string[x] = code[i];
		}
		x++;
	}
	return (string);
}
