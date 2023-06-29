#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: The function is an entry point of the program.
 * It initializes variables, performs a specific operation,
 * and prints the result.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;

	(p + 5) = 98;

	printf("a[2] = %d\n", a[2]);

	return (0);
}
