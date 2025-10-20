#include "main.h"
/**
 * print_line - prints _ n times
 * @n: number of times to print _
 *
 * Return: nothing void
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n <= 0)
		{
			continue;
		}
		_putchar('_');
	}
	_putchar('\n');
}
