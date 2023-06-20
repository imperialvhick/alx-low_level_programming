#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int base16 = 0;

	while (base16 < 10)
	{
		putchar('0' + base16);
		base16++;
	}
	base16 = 10;
	while (base16 < 16)
	{
		putchar('a' + (base16 - 10));
		base16++;
	}
	putchar('\n');

	return (0);
}

