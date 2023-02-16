#include <stdio.h>
/**
 * main - A program that prints the various size of computer types
 * Return: 0 (Sucess)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

printf("size of a char: %zu bytes(s)\n", (unsigned long)sizeof(a));
printf("size of an int: %zu bytes(s)\n", (unsigned long)sizeof(b));
printf("size of a long int: %zu bytes(s)\n", (unsigned long)sizeof(c));
printf("size of a long long int : %zu bytes(s)\n", (unsigned long)sizeof(d));
printf("size of a float: %zu bytes(s)\n", (unsigned long)sizeof(f));
return (0);
}
