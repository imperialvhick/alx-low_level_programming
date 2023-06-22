#include "main.h"

/**
 * _abs - Computes the absolute value of an integer
 * @v: integer to be computed
 * Return: Always 0 (success)
 */

int _abs(int v)
{
	if (v < 0)
	{
		int abs_Val;

		abs_Val = -v;
		return (abs_Val);
	}
	return (v);
}

