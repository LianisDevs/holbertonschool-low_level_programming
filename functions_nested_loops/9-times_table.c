#include "main.h"
/**
 * times_table - prints the 9 times table starting at 0
 * @n: starting number
 *
 * Return: nothing
 */

void times_table(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		_putchar('0' + n);
		if (n == 9)
		{
			break;
		}
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
	}
	_putchar('\n');
}
