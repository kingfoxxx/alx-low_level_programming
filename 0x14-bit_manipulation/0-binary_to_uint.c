#include "main.h"

/**
 * binary_to_uint - Converts a binary number 2 unsigned int.
 * @b: String containing the binary of numbers
 * Return: Converted number.
 */

unsigned int binary_to_uint(const char *b)
{

	unsigned int dec_val = 0;
	int i;

	if (!b)
		return (0);

	/* return if the value is different to 0 or 1*/
	for (i = 0; b[i] != '\0'; i++)
		if (b[i]  != '0' && b[i] != '1')
			return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		dec_val *= 2;
		if (b[i] == '1')
			dec_val += 1;
	}
	return (dec_val);
}
