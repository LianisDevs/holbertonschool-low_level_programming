#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - prints a string followed by new line
 * @str: Pointer to string
 * Return: nothing/ void
 */

void _puts_recursion(char *str)
{
	if (*str == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*str);

	_puts_recursion(str + 1);

}
