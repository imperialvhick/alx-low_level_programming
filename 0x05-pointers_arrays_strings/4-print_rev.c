#include "main.h"

/**
 * print_rev - prints a string in reverse followed by a newline
 * @s: string to be printed
 * return: void
 */

void print_rev(char *s)
{
	int a = 0;
	int b;

	while (*s != '\0')
	{
		a++;
		s++;
	}
	s--;
	for (b = a; b > 0; b--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}	
