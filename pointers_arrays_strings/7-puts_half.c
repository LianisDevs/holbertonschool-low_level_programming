#include "main.h"
#include <stdio.h>
/**
 * puts_half - prints 2nd half of string
 * @str: pointer to string
 * Return: nothing
 */

void puts_half(char *str)
{
	int counter = 0;
	int half_counter;

	if (*str == '\0')
	{
		_putchar('\n');
		return;
	}

	while (str[counter + 1])
	{
		counter++;
	}
	counter++;

	half_counter = counter / 2;

	while (half_counter <= counter)
	{
		_putchar(str[half_counter]);
		half_counter++;

	}
	_putchar('\n');
}
