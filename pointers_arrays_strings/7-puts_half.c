#include "main.h"
#include <stdio.h>
/**
 * puts_half - prints 2nd half of string
 * @str: pointer to string
 * Return: nothing
 */

void puts_half(char *str)
{
	int counter = 1;
	int half_counter;
	int i;

	if (*str == '\0')
	{
		_putchar('\n');
		return;
	}

	while (str[counter])
		counter++;

	if (counter % 2 == 0)
		half_counter = counter / 2;
	else
		half_counter = (counter + 1) / 2;

	for (i = half_counter; i < (counter + 1); i++)
		_putchar(str[i]);
	_putchar('\n');
}
