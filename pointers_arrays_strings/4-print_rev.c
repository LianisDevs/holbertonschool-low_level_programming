#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: pointer to string
 * Return: nothing
 */

void print_rev(char *s)
{
	int counter = 0;

	if (*s == '\n')
	{
		_putchar('\n');
		return;
	}

	while (s[counter + 1])
	{
		counter++;
	}

	while (counter >= 0)
	{
		_putchar(s[counter]);
		counter--;
	}
	_putchar('\n');
}
