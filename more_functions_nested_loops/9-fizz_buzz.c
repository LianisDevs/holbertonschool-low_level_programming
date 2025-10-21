#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0
 */

int main(void)
{
	int number;
	int total = 100;

	for (number = 1; number <= total; number++)
	{
		if ((number % 3 != 0) && (number % 5 != 0))
		{
			printf("%d", number);
		}
		else if ((number % 3 == 0) && (number % 5 != 0))
		{
			printf("Fizz");

		}
		else if ((number % 5 == 0) && (number % 3 != 0))
		{
			printf("Buzz");
		}
		else
		{
			printf("FizzBuzz");
		}

		if (number < total)
		{
			printf(" ");
		}
		else
		{
			printf("\n");
		}
	}
	return (0);
}
