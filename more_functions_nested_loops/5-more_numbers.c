#include "main.h"
/**
 * more_numbers - prints 10x numbers 0-14
 *
 * Return: nothing void
 */

void more_numbers(void)
{
	int i;
	int counter = 0;
	int first_digit;
	int second_digit;

	while (counter < 10)
	{
		for (i = 0; i <= 14; i++)
		{
			first_digit = (i / 10);
			second_digit = (i % 10);

			if (first_digit > 0)
			{
				_putchar('0' + first_digit);
			}
			_putchar('0' + second_digit);
		}
		counter++;
		_putchar('\n');
	}
}
