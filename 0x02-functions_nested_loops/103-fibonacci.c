#include <stdio.h>

/**
 * main - finding and printing the sum of the even-valued terms
 * followed by a new line
 * Return: 0 is a success
 */
int main(void)
{
	int x;
	unsigned long int first, second, next, sum;

	first = 1;
	second = 2;
	sum = 0;

	x = 1;
	while (x <= 33)
	{
		if (first < 4000000 && (first % 2) == 0)
		{
			sum = sum + first;
		}
		next = first + second;
		first = second;
		second = next;
		x++;
	}

	printf("%lu\n", sum);

	return (0);
}
