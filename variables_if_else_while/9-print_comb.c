#include <stdio.h>
/**
 * main - entry point
 *
 * Return: always zero to show succuess
 */
int main(void)
{
	int n;
	char c;

	for (n = 0; n <= 9; n++)
	{
		putchar('0' + n);
		if (n == 9)
		{
			break;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}

