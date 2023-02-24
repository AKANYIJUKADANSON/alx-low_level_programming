#include "main.h"

/**
 * print_numbers(void) - prints the numbers, from 0 to 9,
 * followed by a new line
 */
void print_numbers(void)
{
	int x;

	x = 0;
	while (x < 10)
	{
		_putchar(x + '0');
		x++;
	}

	_putchar('\n');
}
