#include "main.h"

/**
 * swap_int - swaps the values of two variables
 * @a: pointer to an int variable
 * @b: pointer to an int variable
 * temp: an int variable
 * return: void
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

