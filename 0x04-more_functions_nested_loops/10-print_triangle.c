#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		int x, y;

		x = 1;
		while (x <= size)
		{
			y = x;
			while (y < size)
			{
				_putchar(' ');
				y++;
			}

			y = 1;
			while (y <= x)
			{
				_putchar('#');
				y++;
			}

			_putchar('\n');
			x++;
		}
	}
}
