#include "main.h"

/**
 * print_alphabet_x10(void) - prints lowercase alphabet ten times
 *
 * Return: nothing
 */

void print_alphabet_x10(void)
{
	int i;

	while (i <=9)
	{
		char j;

		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j)
		}
		_putchar('\n')
		i++
	}
}
