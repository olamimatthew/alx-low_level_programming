#include "main.h"

/**
 * print_alphabet_x10 - prints lowercase alphabet ten times
 *
 * Return: nothing
 */

void print_alphabet_x10(void)
{
	int i;

	for (i <= '9';)
	{
		char j;

		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
		i++;
	}
}
