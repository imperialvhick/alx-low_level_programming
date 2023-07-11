#include "main.h"

/**
 * _strcmp - compares two string
 * @s1: first string to be compared
 * @s2: second string to be compared
 * Return: 0 if s1 == s2, a negative value if s1 < s2,
 * a positive value if s1 > s2
 */

int _strcmp(char *s1, char *s2)
{
	int a = 0;
	int compare;

	while (s1[a] == s2[a] && s1[a] != '\0')
	{
		a++;
	}
	compare = s1[a] - s2[a];
	return (compare);
}
