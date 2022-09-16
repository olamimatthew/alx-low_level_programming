#include "main.h"

/**
 * print_line - Prints line n times.
 * @n: number of times line is to be printed
 * Return: nothing
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
