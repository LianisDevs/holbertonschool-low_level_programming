#include "main.h"
/**
 * _abs - computes absolute value of int
 * @n: The number to check
 *
 * Return: absolute value
 */

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (n * (-1));
	}
	else
	{
		return (0);
	}
}
