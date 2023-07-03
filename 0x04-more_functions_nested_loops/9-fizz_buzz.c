#include <stdio.h>
#include "main.h"

/**
 * main - prints the number from 1 to 100
 * for multiples of 3, print Fizz
 * for multiples of 5, print Buzz
 * for multiples of both 3 and 5, print FizzBuzz
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if (a % 15 == 0)
		{
			printf("FizzBuzz");
		}
		else if (a % 3 == 0)
		{
			printf("Fizz");
		}
		else if (a % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", a);
		}
		if (a < 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}

