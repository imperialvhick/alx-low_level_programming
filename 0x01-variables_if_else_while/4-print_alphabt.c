#include <stdio>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int letter = 'a';

	while (letter <= 'z')
	{
		if (letter != 'e' && letter != 'q')
		{
			putchar(letter);
		}
		letter++;
	}
	putchar('\n');

	return (0);
}

