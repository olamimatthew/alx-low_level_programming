#include "main.h"

/**
 * _pow_recursion - Prints the value of x raise to y
 * @x: first integer base
 * @y: second integer exponent
 * Return: The value of exponentiation
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
