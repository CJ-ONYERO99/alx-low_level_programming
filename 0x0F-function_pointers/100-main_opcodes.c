#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program.
 * @argc: The number of arguments passed to the program.
 * @argv: Array of pointers to the arguments passed to the program.
 *
 * Return: Always 0 (Success).
 */
int main(int argc, char *argv[])
{
	int bytes, i;
	unsigned char *main_opcodes;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	main_opcodes = (unsigned char *)main;

	for (i = 0; i < bytes; i++)
	{
		printf("%02x", main_opcodes[i]);
		if (i < bytes - 1)
			printf(" ");
	}
	printf("\n");

	return (0);
}
