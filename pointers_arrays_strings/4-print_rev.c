#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: pointer to string
 * Return: nothing
 */

void print_rev(char *s)
{
	int counter;

	while (s[counter] != '\0')
	{
		counter++;
	}

	while (counter >= 0)
	{
		_putchar(s[counter]);
		if (counter == 0)
		{
			_putchar('\n');
			return;
		}
		counter--;
	}
	_putchar('\n');
}
