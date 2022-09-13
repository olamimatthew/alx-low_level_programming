#include "main.h"

/**
 * print_alphabet_x10 - prints lowercase alphabet ten times
 *
 * Return: nothing
 */

void print_alphabet_x10(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		char j;

		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
