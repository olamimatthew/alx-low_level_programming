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
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";

	int i;
	
	for (i = 26; i > 1; i = 0; i--)
	{
		putchar(alp[i]);
	}
	
	putchar('\n');

	return (0);
}
