#include <stdio.h>

/**
 * main - computing and printing the sum of all the 
 * multiples of 3 or 5 below 1024 (excluded), 
 * followed by a new line
 * Return: (0) is a success
 */
int main(void)
{
	unsigned long int sum_of_3, sum_of_5, total_sum;
	int x;

	sum_of_3 = 0;
	sum_of_5 = 0;
	total_sum = 0;

	x = 0;
	while (x < 1024)
	{
		if ((x % 3) == 0)
		{
			sum_of_3 = sum_of_3 + x;
		} else if ((x % 5) == 0)
		{
			sum_of_5 = sum_of_5 + x;
		}
		x++;
	}
	total_sum = sum_of_3 + sum_of_5;
	printf("%lu\n", total_sum);
	return (0);
}
