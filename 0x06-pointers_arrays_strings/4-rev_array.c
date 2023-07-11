#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: pointer to an array
 * @n: number of elements of the array
 */

void reverse_array(int *a, int n)
{
	int i;
	int b;

	n = n - 1;
	b = 0; 
	while (b <= n)
	{
		i = a[b];
		a[b++] = a[n];
		a[n--] = i;
	}
}
