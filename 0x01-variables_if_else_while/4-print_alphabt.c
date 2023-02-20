#include <stdio.h>

/**
 * main - printing the alphabet in lowercase,
 * without q and e
 * followed by new line
 * Return:(0) is a success
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'd'; ch++)
	{
		putchar(ch);
	}
    for (ch = 'f'; ch <= 'p'; ch++)
	{
		putchar(ch);
	}
	for (ch = 'r'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
