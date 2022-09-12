#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Prints all possible combinations of single-digit numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a;

	for (a = 48; a < 58; a++)
	{
		putchar(a);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
