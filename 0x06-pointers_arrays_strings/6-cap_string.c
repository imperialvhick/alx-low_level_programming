#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @a: pointer to a string
 * Return: pointer to the changed string
 */

char *cap_string(char *a)
{
	int i;

	i = 0;

	while (a[i] != '\0')
	{/*we capitalize the nexr char after i*/
		if (a[0] >= 97 && a[0] <= 122)
		{
			a[0] = a[0] - 32;
		}
		if (a[i] == ' ' || a[i] == '\t' || a[i] == '\n'
		    || a[i] == ',' || a[i] == ';' || a[i] == '.'
		    || a[i] == '!' || a[i] == '?' || a[i] == '"'
		    || a[i] == '(' || a[i] == ')' || a[i] == '{' 
		    || a[i] == '}')
		{
			if (a[i + 1] >= 97 && a[i + 1] <= 122)
			{
				a[i + 1] = a[i + 1] - 32;
			}
		}
		i++;
	}
	return (a);
}
