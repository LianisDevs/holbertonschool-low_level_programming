#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints all nat numbers from n to 98
 * @n: number passed to function
 *
 * Return: nothing
 */

void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		int length = ((98 - n) + 1);

		for (i = 0; i < length; i++)
		{
			printf("%d", n);
			if (n == 98)
			{
				break;
			}
			printf(", ");
			n++;
		}
	printf("\n");
	}
	else
	{
		int length = ((n - 98) + 1);

		for (i = 0; i < length; i++)
		{
			printf("%d", n);
			if (n == 98)
			{
				break;
			}
			printf(", ");
			n--;
		}
	printf("\n");
	}
}
