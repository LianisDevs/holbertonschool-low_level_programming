#include "main.h"
/**
 * print_square - prints square of #
 * @size: input to function size of square
 *
 * Return: nothing void
 */

void print_square(int size)
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
		for (height = 0; height < size; height++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
