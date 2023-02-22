#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 * followed by a new line
 * Return: 0 is a success
 */
int main(void)
{
	long int x, first, second, next;

	first = 1;
	second = 2;
	x = 1;

	while (x <= 50)
	{
		if (first != 20365011074)
		{
			printf("%ld, ", first);
		}
		else
		{
			printf("%ld\n", first);
		}
		next = first + second;
		first = second;
		second = next;
		x++;
	}

	return (0);
}
