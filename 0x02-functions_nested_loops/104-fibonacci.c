#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned long int current, previous, temp;
	int count;

	current = 1;
	previous = 0;

	for (count = 1; count <= 98; count++)
	{
		printf("%lu", current);

		if (count != 98)
			printf(", ");

		temp = current;
		current += previous;
		previous = temp;
	}

	printf("\n");

	return 0;
}
