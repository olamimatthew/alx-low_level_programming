#include "main.h"

/**
 * print_rev - prints a string in reverse order followed by a new line
 * @s: input string.
 * Return: Nothing.
 */
void print_rev(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
	{
		count++;
	}
	count--;
	while (count >= 0)
	{
		_putchar(*(s + count));
		count--;
	}
	_putchar('\n');
}
