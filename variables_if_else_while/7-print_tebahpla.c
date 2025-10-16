#include <stdio.h>
/**
 * main - entry point
 *
 * Return: always zero to show succuess
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}

