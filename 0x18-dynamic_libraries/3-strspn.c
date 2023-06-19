#include "main.h"


/**
 * _strspn - gets the length of a prefix substrings
 * @s: initial segment.
 * @accept: accepted bytes.
 * Return: the number of accepted bytes.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, x, bool;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		bool = 1;
		for (x = 0; *(accept + x) != '\0'; x++)
		{
			if (*(s + i) == *(accept + x))
			{
				bool = 0;
				break;
			}
		}
		if (bool == 1)
			break;
	}
	return (i);
}
