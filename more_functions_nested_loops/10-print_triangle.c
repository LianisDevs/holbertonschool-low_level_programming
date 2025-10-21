#include "main.h"
/**
 * print_triangle - prints # triangle size times
 * @size: height of triangle
 *
 * Return: nothing void
 */

void print_triangle(int size)
{
	int row;
	int height;
	int hash;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (row = 0; row < size; row++)
	{
		for (height = 0; height < size - (row + 1); height++)
		{
			_putchar(' ');
		}
		for (hash = 0; hash < (row + 1); hash++)
		{
			_putchar('#');
		}
	_putchar('\n');
	}
}
