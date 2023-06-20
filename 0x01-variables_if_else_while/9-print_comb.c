#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int singNum = 0;

	while (singNum < 10)
	{
		putchar(singNum + '0');

		if (singNum < 9)
		{
			putchar(',');
			putchar(' ');
		}

		singNum++;
	}
	putchar('\n');

	return (0);
}

