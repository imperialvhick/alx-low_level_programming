#include "main.h"

/**
 * _strncat - concatenates two strings, it will use n bytes from src
 * @dest: string to be concatenated
 * @src: string to be concatenated
 * @n: input value
 *
 * Return: pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int a = 0;
	int b;

	while (dest[a] != '\0')
	{
		a++;
	}
	for (b = 0; b < n && src[b] != '\0'; b++)
	{
		dest[a] = src[b];
		a++;
	}
	dest[a] = '\0';

	return (dest);
}
