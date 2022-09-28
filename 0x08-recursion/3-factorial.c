#include "main.h"

/**
 * factorial - Prints the factorial of a number.
 * @n: Number
 * Return: Factorial of a given number.
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
	else if (n < 0)
		return (-1);
}
