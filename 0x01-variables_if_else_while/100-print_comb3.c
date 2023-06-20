#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int tens = 1;
	int ones = 0;

	while (tens < 9)
	{
		putchar(tens + '0');
		putchar(ones + '0');

		if (tens < '8' || ones < '9')
		{
			putchar(',');
			putchar(' ');
		}
		ones++;

		if (ones > 9)
		{
			tens++;
			ones = tens + '1';
		}
	}
	return (0);
}

