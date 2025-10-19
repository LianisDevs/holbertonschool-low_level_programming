#include "main.h"
/**
 * print_alphabet - prints the alphabet from a to z using _putchar
 *
 * Return: nothing
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
