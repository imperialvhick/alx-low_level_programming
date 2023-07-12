#include "main.h"

/**
 * rev_string - reverse array
 * @n: integer params
 * Return: 0
 */

void rev_string(char *n)
{
	int i = 0;
	int j = 0;
	char temp;

	while (*(n + i) != '\0')
	{
		i++;
	}
	i--;

	for (j = 0; j < i; j++, i--)
	{
		temp = *(n + j);
		*(n + j) = *(n + i);
		*(n + i) = temp;
	}
}

/**
 * infinite_add - add 2 numbers together
 * @n1: first number to be added 
 * @n2: second number to be added
 * @r: buffer to store results
 * @size_r: buffer size
 * Return: pointer to function
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int over = 0, i = 0, j = 0, nums = 0;
	int v1 = 0, v2 = 0, temp = 0;

	while (*(n1 + i) != '\0')
		i++;
	while (*(n2 + j) != '\0')
		j++;
	i--;
	j--;
	if (j >= size_r || i >= size_r)
		return(0);
	while (j >= 0 || i >= 0 || over == 1)
	{
		if (i < 0)
			v1 = 0;
		else
			v1 = *(n1 + i) - '0';
		if (j < 0)
			v2 = 0;
		else
			v2 = *(n2 + j) - '0';
		temp = v1 + v2 + over;
		if (temp >= 10)
			over = 1;
		else
			over = 0;
		if (nums >= (size_r - 1))
			return (0);
		*(r + nums) = (temp % 10) + '0';
		nums++;
		j--;
		i--;
	}
	if (nums == size_r)
		return (0);
	*(r + nums) = '\0';
	rev_string(r);
	return (r);
}
