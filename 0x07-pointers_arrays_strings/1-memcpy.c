#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: first memory area
 * @src: second memory area to be copied
 * @n: specifies the number of bytes to be copied
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}
