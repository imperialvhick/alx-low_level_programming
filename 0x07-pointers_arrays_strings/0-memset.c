#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: pointer to a char variable
 * @b: constant byte
 * @n: number of times b is to be filled
 * Return: pointer to the now filled char variable
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}
	return (s);
}
