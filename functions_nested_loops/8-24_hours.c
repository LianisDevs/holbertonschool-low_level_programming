#include "main.h"
/**
 * jack_bauer - prints every minute of the day
 *
 * Return: nothing
 */

void jack_bauer(void)
{
	int min_r;
	int min_l;
	int hour_r;
	int hour_l;

	for (hour_l = 0; hour_l <= 2; hour_l++)
	{
		for (hour_r = 0; hour_r <= 9 && hour_l <= 2; hour_r++)
		{
			if (hour_l == 2 && hour_r == 4)
				break;

			for (min_l = 0; min_l <= 5; min_l++)
			{
				for (min_r = 0; min_r <= 9; min_r++)
				{
					_putchar('0' + hour_l);
					_putchar('0' + hour_r);
					_putchar(':');
					_putchar('0' + min_l);
					_putchar('0' + min_r);
					_putchar('\n');
				}
			}
		}
	}
}
