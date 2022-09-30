#include <stdio.h>

/**
 * main - Prints the producs of two integers.
 * @argc: Number of commandline arguments.
 * @argv:: Array of commandline arguments.
 * Return: 0 - Success.
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
