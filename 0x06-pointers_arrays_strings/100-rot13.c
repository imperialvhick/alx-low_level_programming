#include "main.h"

/**
 * rot13 - encodes strings using rot13
 * @a: pointer to string
 * Return: pointer to encoded string
 */

char *rot13(char *a)
{
	int i, b;
	char r1[] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"};
	char r2[] = {"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm"};

	for (i = 0; a[i] != '\0'; i++)
	{
		for (b = 0; b <= 52; b++)
		{
			if (r1[b] == a[i])
			{
				a[i] = r2[b];
				break;
			}
		}
	}
	return (a);
}


