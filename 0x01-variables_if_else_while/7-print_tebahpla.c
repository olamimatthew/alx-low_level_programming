#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints lowercase alphabets in reverse order
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char i[26] = "abcdefghijklmnopqrstuvwxyz";
	
	int i;

	for (i = 26; i > 1; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
