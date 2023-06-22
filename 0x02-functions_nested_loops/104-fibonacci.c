#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned long int fib1 = 1;
	unsigned long int fib2 = 2; 
	unsigned long int fib_next;
	int count;

	printf("%lu, %lu, ", fib1, fib2);

	for (count = 3; count <= 98; ++count)
	{
		fib_next = fib1 + fib2;
		printf("%lu", fib_next);

		if (count != 98)
			printf(", ");

		fib1 = fib2;
		fib2 = fib_next;
	}

	printf("\n");
	return (0);
}
