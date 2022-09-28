#include "main.h"

/**
 * print_rev_recursion - Prints string in reverse order.
 * @s: String
 * Return: Nothing
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
