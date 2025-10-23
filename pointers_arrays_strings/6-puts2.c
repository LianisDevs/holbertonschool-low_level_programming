#include "main.h"
/**
 * puts2 - prints every other character
 * @str: what we're checking
 * Return: nothing
 */

void puts2(char *str)
{
	int i = 0;

	if (*str == '\0')
	{
		_putchar('\n');
		return;
	}
	while ((i == 0) || (str[i - 1] != '\0' && str[i] != '\0'))
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
