#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string to be printed
 * return: void
 */

void puts_half(char *str)
{
	int a = 0;
	int b;

	while (str[a] != '\0')
	{
		a++;
	}
	if (a % 2 == 0)
		b = a / 2;
	else
		b = ((a - 1) / 2(+ 1));
	while (str[b] != '\0')
	{
		_putchar(str[b]);
		b++;
	}
	_putchar('\n');
}

