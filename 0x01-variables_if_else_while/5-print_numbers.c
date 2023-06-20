#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int digit = 0;

	while (digit < 10)
	{
		printf("%d", digit);
		digit++;
	}
	putchar('\n');

	return (0);
}

