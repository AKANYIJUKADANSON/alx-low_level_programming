#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int x, y, product;

	x = 0;

	while (x < 10)
	{
		y = 0;

		while (y < 10)
		{
			product = y * x;

			if (y == 0)
			{
				_putchar(product + '0');
			}

			if (product < 10 && y != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(product + '0');
			}
			else if (product >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');
			}
			y++;
		}
		_putchar('\n');
		x++;
	}
}
