#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: first string to be concatenated
 * @src: second string to be concatenated
 *
 * Return: returns a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int a = 0;
	int b = 0;

	while (dest[a] != '\0')
	{
		a++;
	}
	while (src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';

	return (dest);
}
