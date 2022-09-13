#include "main.h"

/**
 * print_sign - Returns 1 and prints + if n is greater than zero
 * Returns 0 and prints 0 if n is zero
 * Returns -1 and prints - if n is less than zero
 *
 * @c: the character in ASCII code
 *
 * Return: 1 if number is greater than zero, 0 if number is zero
 * -1 if number is less than zero
 */
int print_sign(int n)
{
	if (n >= 48 && n <= 57)
	{
		return (1);
		_putchar(+);
	}
	if (n == 48)
	{
		return (0);
		_putchar(0);
	}
	if (n < 48)
	{
		return(-1);
		_putchar(-);
	}
	_putchar('\n');

{
