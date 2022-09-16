#include "main.h"

/**
 * print_triangle - print diagonal line n times.
 * @size: number of lines.
 * Return: Nothing
 */
void print_triangle(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < (size - i); j++)
			_putchar(' ');
		for (j--; j < size; j++)
			_putchar(35);
		if (i < (size - i))
			_putchar('\n');
	}
	_putchar('\n');
}
