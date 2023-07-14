#include "main.h"

/**
 * _strspn - provides the length of a prefix substring
 * @s: a string
 * @accept: a substring
 * Return: number of bytes of s available in accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int a;

	while (*s != '\0')
	{
		for (a = 0; accept[a] != '\0'; a++)
		{
			if (*s == accept[a])
			{
				n++;
				break;
			}
			else if (accept[a + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}
