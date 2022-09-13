#include "main.h"

/**
 * main - prints alphabets in lowercase
 *
 * Return: Always 1 (Success)
 */

void print_alphabet(void);
{
	char j;

	for (j = 'a'; j <= 'y'; j++)
	{
		_putchar(j);
	}
	_putchar('\n');
	return (1);
}
