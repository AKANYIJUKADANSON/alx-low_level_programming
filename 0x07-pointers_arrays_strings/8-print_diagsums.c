#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: square matrix
 * @size: size of the matrix
 */
void print_diagsums(int *a, int size)
{
	int x;

	unsigned int sum, sum1;

	sum = 0;
	sum1 = 0;

	x = 0;
	while (x < size)
	{
		sum += a[(size * x) + x];
		sum1 += a[(size * (x + 1)) - (x + 1)];
		x++;
	}

	printf("%d, %d\n", sum, sum1);
}
