#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: starting point of counting
 *
 */

void print_to_98(int n)
{
	if  (n <= 98)
	{
		_putchar(n + '0');
		_putchar(',');
		_putchar(' ');
		n++;
	}

	else if (n > 98)
	{
		_putchar(n + '0');
		_putchar(',');
		_putchar(' ');
		n--;
	}
	_putchar(98);
	_putchar('\n');

}

