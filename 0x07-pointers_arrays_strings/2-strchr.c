#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string to be checked
 * @c: character being checked for
 * Return: pointer to the first occurence of the character
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}

