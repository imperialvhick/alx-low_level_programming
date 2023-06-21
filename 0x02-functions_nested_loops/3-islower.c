#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: Character to be checked
 * Return: Always 0 (success)
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

