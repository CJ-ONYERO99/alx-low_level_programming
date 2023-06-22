#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: 0 on success
 */
int main(void)
{
	unsigned long int prev = 1, curr = 2, next;
	unsigned int count;

	printf("%lu, %lu, ", prev, curr);

	for (count = 3; count <= 98; count++)
	{
		next = prev + curr;
		printf("%lu", next);

		if (count < 98)
			printf(", ");

		prev = curr;
		curr = next;
	}

	printf("\n");

	return (0);
}
