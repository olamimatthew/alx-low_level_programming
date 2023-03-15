#include "main.h"

/**
 * _isdigit - checks if an character is digit
 * @c: character to be checked if its digit
 * Return: 1 if digit, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
