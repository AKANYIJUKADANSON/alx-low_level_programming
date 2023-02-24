#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: number of times the character _ will be printed
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int x;

		x = 1;
		while (x <= n)
		{
			_putchar('_');
			x++;
		}
		_putchar('\n');
	}

}
