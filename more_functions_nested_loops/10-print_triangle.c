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

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (row = 0; row < size; row++)
	{
		for (height = 0; height < row; height ++)
		{
			_putchar(' ');
		}
		_putchar('#');
	_putchar('\n');
	}
}
