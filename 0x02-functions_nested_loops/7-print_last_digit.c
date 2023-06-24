#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @num: Number to be used
 * Return: Value of the last digit
 */

int print_last_digit(int num)
{
	int lastnum = num % 10;

	if (lastnum < 0)
	{
		lastnum = -lastnum;
	}

	_putchar('0' + lastnum);
	return (lastnum);
}

