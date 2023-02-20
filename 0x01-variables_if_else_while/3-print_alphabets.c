#include <stdio.h>

/**
 * main - printing the alphabet in lowercase,
 * then in uppercase and
 * followed by new line
 * Return:(0) is a success
 */
int main(void)
{
	char ch;
	char CH;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (CH = 'A'; CH <= 'Z'; CH++)
	{
		putchar(CH);
	}
	putchar('\n');
	return (0);
}
