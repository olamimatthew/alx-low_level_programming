#include "3-calc.h"

/**
 * op_add - returns the addition of two integers
 * @a: first interger
 * @b: second integer
 *
 * Return: addition of the two integers.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts two integers and return the result
 * @a: first integer
 * @b: second integer
 *
 * Return: The result
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - divides two integers and return the result
 * @a: first integer
 * @b: second integer
 *
 * Return: The result 
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two integers and return the result
 * @a: first integer
 * @b: second integer
 *
 * Return: The result
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - Returns the remainder of division of 2 ints
 * @a: first integer
 * @b: second integer
 *
 * Return: The result
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
