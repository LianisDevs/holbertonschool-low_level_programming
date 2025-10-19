#include "main.h"
/**
 * main - entry point
 *
 * Return: always zero to show success
 */

void print_alphabet(void)
{
	char c;
	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
	return;
}
