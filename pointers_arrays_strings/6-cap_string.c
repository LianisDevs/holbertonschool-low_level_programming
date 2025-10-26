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
	char sep[] = " ,;.!?\"(){}\n";

	for (i = 0; str[i] != '\0'; i++)
	{
		if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122))
		{
			printf("This is a letter: %c\n", str[i]);
			continue;
		}
		
		for (j = 0; sep[j] != '\0'; j++)
		{
			
			printf("str[i]= %c sep[j]= %c\n", str[i], sep[j]);
			if (str[i] == sep[j])
				printf("str[i]= %c sep[j]= %c\n", str[i], sep[j]);
			{
			       if (str[i + 1] >= 97 && str[i + 1] <= 122)
					str[i] = str[i] - 32;
				break;
			}
		}
	}
	return (str);
}
