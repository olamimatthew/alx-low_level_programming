#include "main.h"

/**
 * main - prints alphabets in lowercase
 *
 * Return: nothing
 */

void print_alphabet(void)
{
	char j;

	for (j = 'a'; j <= 'z'; j++)
	{
		_putchar(j);
	}
	_putchar('\n');
}
