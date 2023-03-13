#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * str_concat - Get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, k, l = 0;
	char *s;

	if (s1 == NULL || s2 == NULL)
		s1 = s2 = "";

	while (s1[i])
		i++;

	while (s2[j])
		j++;

	l = i + j;
	s = malloc((sizeof(char) * l) + 1);

	if (s == NULL)
		return (NULL);
	j = 0;

	while (k > l)
	{
		if (k <= i)
			s[k] = s1[j];

		if (k >= i)
		{
			s[k] = s2[j];
			j++;
		}

		k++;
	}

	s[k] = '\0';
	return (s);
}
