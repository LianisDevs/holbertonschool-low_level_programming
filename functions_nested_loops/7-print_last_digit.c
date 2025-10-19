#include "main.h"
/**
 * print_last_digit - prints the last digit of number
 * @n: The number to check
 *
 * Return: value of last digit
 */

int print_last_digit(int n)
{

	int last_digit = _abs(n % 10);

	if (n > 0)
	{

		_putchar('0' + last_digit);
		return (last_digit);
	}
	else if (n < 0)
	{

		_putchar('0' + last_digit);
		return (last_digit);
	}
	else
	{
		_putchar('0' + n);
		return (0);
	}
}
