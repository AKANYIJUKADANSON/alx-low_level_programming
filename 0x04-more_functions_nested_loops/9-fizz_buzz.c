#include "main.h"
#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100, followed by a new line
 * prints Fizz instead of the number for multiples of 3
 * and prints Buzz for multiples of five
 * Return: 0 is a success
 */
int main(void)
{
	int x;

	x = 1;
	while (x <= 100)
	{
		if (x % 3 == 0 && x % 5 != 0)
		{
			printf(" Fizz");
		} else if (x % 5 == 0 && x % 3 != 0)
		{
			printf(" Buzz");
		} else if (x % 3 == 0 && x % 5 == 0)
		{
			printf(" FizzBuzz");
		} else if (x == 1)
		{
			printf("%d", x);
		} else
		{
			printf(" %d", x);
		}
		x++;
	}
	printf("\n");

	return (0);
}
