#include "main.h"

/**
 * print_square - prints a square, followed by a new line;
 * @size: square size
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		int x, y;

		x = 0;
		while (x < size)
		{
			y = 0;
			while (y < size)
			{
				_putchar('#');
				y++;
			}
			_putchar('\n');
			x++;
		}
	}
}
