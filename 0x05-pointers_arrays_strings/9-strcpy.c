#include "main.h"

/**
 * _strcpy - pointer to a function that copies the string pointed to by src
 * @dest: pointer to a string
 * @src: pointer to a string
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	char *a = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (a);
}
