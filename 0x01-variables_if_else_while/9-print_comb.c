#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 * separated by a comma folowed by space
 * Return:(0) is a success
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
