#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: address to a string
 * temp: a local variable
 *
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int temp = 0;

	while (*s != '\0')
	{
		temp++;
		s++;
	}
	return (temp);
}

