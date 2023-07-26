#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to be used
 *
 * Return: returns the natural square root
 */

int _sqrt_recursion(int n);
{
	if (n < 0)
		return (-1);
	return (main_sqrt_recursion(n, 0));
}

/**
 * main_sqrt_recursion - recurses to find natural square root of a number
 * @n: number to calculate the square root of
 * @a: iterator
 *
 * Return: the resulting square root
 */

int main_sqrt_recursion(int n, int a)
{
	if (a * a > n)
		return (-1);
	if (a * a == n)
		return (a);
	return (main_sqrt_recursion(n, a + 1));
}

