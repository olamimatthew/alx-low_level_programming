#include "main.h"

/**
 * print_numbers - print numbers from 0 to 9
 * @a: character to print numbers
 */
void print_numbers(void)
{
	int a;

	for (a = 48; a < 58; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
