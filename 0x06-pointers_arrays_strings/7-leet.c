#include "main.h"

/**
 * leet -  encodes a string into 1337.
 * letters a and A are replaced by 4.
 * Letters e and E are replaced by 3
 * Letters o and O are replaced by 0
 * Letters t and T are replaced by 7
 * Letters l and L are replaced by 1
 * @a: pointer of string
 *
 * Return: pointer to a
 */

char *leet(char *a)
{
	int i, b;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	i = 0;
	while (a[i] != '\0')
	{
		b = 0;
		while (b < 10)
		{
			if (a[i] == s1[b])
			{
				a[i] = s2[b];
			}
			b++;
		}
		i++;
	}
	return (a);
}
