#include "main.h"
/**
 * print_diagonal - prints \ n times
 * @n: number of times to print \
 *
 * Return: nothing void
 */

void print_diagonal(int n)
{
	int counter;
	int spaces;

	for (counter = 0; counter < n; counter++)
	{
		for (spaces = counter; spaces < n; spaces ++)
		{
			_putchar(' ');
		}
		_putchar('\\');
	_putchar('\n');
	}
}
