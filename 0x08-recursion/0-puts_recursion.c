#include "main.h"

/**
 * _puts_recursion - prints a string using recursion
 * @s: string to be printed
 * return: void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}
	putchar (*s);
	s++;
	_puts_recursion(s);
}
