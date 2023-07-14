#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string to be checked
 * @c: character being checked for
 * Return: pointer to the first occurence of the character
 */

char *_strchr(char *s, char c)
{
	int a = 0;

	for (; s[a] >= '\0'; a++)
	{
		if (s[a] == c)
		{
			return (&s[a]);
		}
	}
	return (0);
}

