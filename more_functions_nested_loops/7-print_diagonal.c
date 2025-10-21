#include "main.h"
/**
 * print_diagonal - prints \ n times
 * @n: number of times to print \
 *
 * Return: nothing void
 */

void print_diagonal(int n)
{
	int row;
	int height;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (row = 0; row  < n; row++)
	{
		for (height = 0; height < row; height++)
		{
			_putchar(' ');
		}
		_putchar('\\');
	_putchar('\n');
	}
}
