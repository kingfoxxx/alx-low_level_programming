#include "main.h"
#include <stdio.h>


/**
 * _strcpy - copies the string pointed to by src,
 * including the terminating null byte, to the
 * buffer pointed to by dest.
 * @dest: destination.
 * @src: source.
 * Return: the pointer to dest.
 */

char *_strcpy(char *dest, char *src)
{
	int sum = 0;

	while (sum >= 0)
	{
		*(dest + sum) = *(src + sum);
		if (*(src + sum) == '\0')
			break;
		sum++;
	}
	return (dest);
}
