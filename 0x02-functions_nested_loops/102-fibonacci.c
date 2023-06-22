#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: 0 on success
 */
int main(void)
{
	unsigned long int prev = 1, curr = 2, next, count;

	printf("%lu, %lu, ", prev, curr);

	for (count = 3; count <= 50; count++)
	{
		next = prev + curr;
		printf("%lu", next);

		if (count < 50)
			printf(", ");
		else
			printf("\n");

		prev = curr;
		curr = next;
	}

	return (0);
}
