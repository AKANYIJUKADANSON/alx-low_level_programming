#include <stdio.h>

/**
 * main - finds and prints the first 98 Fibonacci numbers,
 * starting with 1 and 2
 * followed by a new line
 * Return: 0 is a success
 */
int main(void)
{
	unsigned long int i, first, second, f1, f2, s1, s2;

	first = 1;
	second = 2;

	printf("%lu", first);

	i = 1;
	while (i < 91)
	{
		printf(", %lu", second);
		second = second + first;
		first = second - first;
		i++;
	}

	f1 = first / 1000000000;
	f2 = first % 1000000000;
	s1 = second / 1000000000;
	s2 = second % 1000000000;

	i = 92;
	while (i < 99)
	{
		printf(", %lu", s1 + (s2 / 1000000000));
		printf("%lu", s2 % 1000000000);
		s1 = s1 + f1;
		f1 = s1 - f1;
		s2 = s2 + f2;
		f2 = s2 - f2;
		i++;
	}

	printf("\n");

	return (0);
}
