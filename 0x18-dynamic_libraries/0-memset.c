#include "main.h"

/**
 * _memset - fills the memory with a constant byte,
 * @s: memory area of file
 * @b: constant byte.
 * @n: bytes filled.
 * Return: the pointer to dest.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
		*(s + j) =  b;

	return (s);
}
