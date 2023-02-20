#include <stdio.h>

/**
 * main - printing all the numbers of base 16 in lowercase,
 * followed by a new line. Using only putchar thrice
 * Return:(0) is a success
 */
int main(void)
{
	int n;
	char ch;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
