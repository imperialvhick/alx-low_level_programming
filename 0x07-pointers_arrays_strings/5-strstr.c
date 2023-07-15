#include "main.h"

/**
 * _strstr - finds the first occurence of needle in haystack
 * @haystack: a string
 * @needle: a sub string
 * Return: pointer to the beginning of the located substring or NULL if not
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *h = haystack;
		char *n = needle;

		while (*h == *n && *n != '\0')
		{
			h++;
			n++;
		}
		if (*n == '\0')
			return (haystack);
		haystack++;
	}
	return (NULL);
}
