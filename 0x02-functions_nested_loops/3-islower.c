#include "main.h"

/**
 * _islower - Shows 1 if the input is a lowercase character.
 * If another case shows 0
 *
 * @c: the character in ASCII code
 *
 * Return: 1 for lowercase character, 0 otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
