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

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'q' && ch != 'e')
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
