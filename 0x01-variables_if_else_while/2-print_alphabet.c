#include <stdio.h>

/**
 * main - printing the alphabet in lowercase,
 * followed by new line
 * Return:(0) is a success
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
