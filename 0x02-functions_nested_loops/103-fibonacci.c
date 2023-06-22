#include <stdio.h>

/**
 * main - Prints the sum of even-valued Fibonacci terms up to 4,000,000
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned long int fib1 = 1, fib2 = 2, fib_sum = 0, even_sum = 0;

	while (fib1 <= 4000000)
	{
		if (fib1 % 2 == 0)
		even_sum += fib1;

		fib_sum = fib1 + fib2;
		fib1 = fib2;
		fib2 = fib_sum;
	}

	printf("%lu\n", even_sum);

	return (0);
}
