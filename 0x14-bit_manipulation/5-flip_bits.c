#include "main.h"

/**
* flip_bits - Number of bits needed to flip
* @n: Number to be fliped to
* @m: Number to be fliped
* Return: Number of bits needed to flipped
**/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{

	unsigned long int number = 0, count = 0;

	number = n ^ m;
	while (number)
	{
		if (number & 1)
			count++;

		number >>= 1;
	}

	return (count);
}
