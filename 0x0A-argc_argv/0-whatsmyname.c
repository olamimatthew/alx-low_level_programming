#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints name of this file
 * @argc: Number of commandline arguments.
 * @argv: array that contains the program command line arguments.
 * Return: 0 - success.
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%S\n", argv[0]);
	return (0);
}
