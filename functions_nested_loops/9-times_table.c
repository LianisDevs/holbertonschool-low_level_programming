#include "main.h"
/**
 * times_table - prints the 9 times table starting at 0
 *
 * Return: nothing
 */

void times_table(void)
{
	int n;
	int counter;
	int first_digit;
	int second_digit;

	for (counter = 0; counter <= 9; counter++)
	{
		for (n = 0; n <= 9; n++)
		{
			first_digit = ((n * counter) / 10);
			second_digit = ((n * counter) % 10);
			if (first_digit == 0)
			{
				if (n == 0)
				{
					_putchar('0' + second_digit);
				}
				else
				{
					_putchar(' ');
					_putchar('0' + second_digit);
				}
			}
			else
			{
				_putchar('0' + first_digit);
				_putchar('0' + second_digit);
			}
			if (n == 9)
			{
				break;
			}
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
