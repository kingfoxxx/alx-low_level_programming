#include "main.h"

/**
 * print_most _numbers - Print the numbers since 0 up to 9
 * Description: Prints the number excluding 2 and 4
 * Return: The numbers since 0 to 9
 */

void print_most_numbers(void)

{

	for (; x <= 9; x++)
	{
	if (x == 2 || x == 4)
	{
	continue:
	}
	else
	{
	_putchar (x + '0');
	}
	}
	_putchar ('\n');
}