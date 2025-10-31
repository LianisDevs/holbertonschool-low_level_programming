#include "main.h"
#include <stdio.h>

int solve_it(int n, int odd_nums, int sum);

/**
 * _sqrt_recursion - return the natural sqrt of a number
 * @n: int value to check
 * Return: sqrt of n if n doesn't have nat sqrt return -1
 */

int _sqrt_recursion(int n)
{
	int result;

	if (n == 0)
		return (0);
	if (n == 1)
		return (1);

	result = (solve_it(n, 1, 1));

	if (result * result == n)
		return (result);
	else
		return (-1);
}

/**
 * solve_it - checks if number has a square root
 * @odd_nums: odd numbers
 * @sum: this tracks the sum of all the + odd numbers
 * @n: int value to check
 * Return: sqrt of n
 */

int solve_it(int n, int odd_nums, int sum)
{
	if (sum >= n)
		return (1);

	return (1 + (solve_it(n, (odd_nums + 2), (sum + odd_nums + 2))));
}
