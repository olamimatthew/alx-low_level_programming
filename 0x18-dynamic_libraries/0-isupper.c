#include "main.h"

/**
 * _isupper - checks if a letter is uppercase
 * @c: the letter to be checked
 * Return: 1 if letter is uppercase, 0 othewise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
