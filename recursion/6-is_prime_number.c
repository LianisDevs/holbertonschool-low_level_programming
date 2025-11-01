#include "main.h"
#include <stdio.h>

int solve_it(int n, int odd_nums, int sum);

int checker(int n, int sqrt, int number);

/**
 * is_prime_number - checks for for prime number
 * @n: int value to check
 *Return: 1 if n is prime number otherwise return 0
 */

int is_prime_number(int n)
{
	int sqrt;
	int result;

	if (n < 2)
		return (0);

	sqrt = solve_it(n, 1, 1);
	result = checker(n, sqrt, 2);

	if (result == 1)
		return (0);
	else
		return (1);
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

/**
 * checker - checks if number is divisible
 * @n: inital value
 * @sqrt: sq root of n
 * @number: starting at 2 and increasing until
 * Return: 1= failure it is divisible or 0= it is prime
 */

int checker(int n, int sqrt, int number)
{
	if (n % number == 0)
		return (1);
	if (number > sqrt)
		return (0);
	return (0 + (checker(n, sqrt, number + 1)));
}
