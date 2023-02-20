#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0,
 * followed by a new line, using putchar
 * Return:(0) is a success
 */
int main(void)
{
	int n = 48;

	while (n <= 70)
	{
	if (n != 58 && n != 58 && n != 59 && n != 60 && n != 61 && n != 62 && n != 63 && n != 64 )
	    {
		putchar(n);
	    }
		n++;
	}
	putchar('\n');
	return (0);
}
