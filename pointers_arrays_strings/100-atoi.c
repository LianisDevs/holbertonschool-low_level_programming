#include "main.h"
#include <stdio.h>
/**
 * _atoi - converts a string to an int
 * @s: pointer to strin
 * Return: converted value or if no numbers 0
 */

int _atoi(char *s)
{
	int i = 0;
	char checker = '+';
	int numbers = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
			if (checker == '+')
			{
				checker = '-';
				i++;
			}
			else
			{
				checker = '+';
				i++;
			}
			continue;
		}
		else if ((s[i] >= '0') && (s[i] <= '9'))
		{
			numbers = numbers * 10 + (s[i] - '0');
			i++;
			if (!(s[i] >= '0') && (s[i] <= '9'))
			{
				break;
			}
			else
				continue;
		}
		i++;
	}
	if (checker == '-')
		numbers = numbers * (-1);
	return (numbers);
}
