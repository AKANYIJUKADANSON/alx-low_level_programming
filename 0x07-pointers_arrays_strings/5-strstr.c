#include "main.h"
#include <stdio.h>

/**
 * *_strstr - locates a substring
 * @haystack: string to search from
 * @needle: substring to serch for
 *
 * Return: pointer to the beginning of the located substring
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int x, j;

	x = 0;
	while (haystack[x] != '\0')
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[x + j] != needle[j])
				break;
		}
		if (!needle[j])
			return (&haystack[x]);
		x++;
	}
	return (NULL);
}
