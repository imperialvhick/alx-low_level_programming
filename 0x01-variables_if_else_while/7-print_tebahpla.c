#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int lowerCase = 'z';

	while (lowerCase >= 'a')
	{
		putchar(lowerCase);
		lowerCase--;
	}
	putchar('\n');

	return (0);
}

