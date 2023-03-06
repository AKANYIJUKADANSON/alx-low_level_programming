#include "main.h"

/**
 * *_strspn - geting the length of a prefix substring
 * @s: string to check from
 * @accept: origin of characters to match in s
 *
 * Return: the number of bytes in the initial segment
 * of s which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, f, flag;

	f = 0;
	i = 0;
	while (s[i] != '\0')
	{
		flag = 0;
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				f++;
				flag = 1;
			}
			j++;
		}
		if (flag == 0)
		{
			return (f);
		}
		i++;
	}

	return (0);
}
