#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix.
 * @a: The square matrix represented as a one-dimensional array.
 * @size: The size of the square matrix.
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0;  /* Sum of the main diagonal */
	int sum2 = 0;  /* Sum of the secondary diagonal */

	for (i = 0; i < size; i++)
	{
		sum1 += a[(size + 1) * i];
		sum2 += a[(size - 1) * (i + 1)];
	}

	printf("%d, %d\n", sum1, sum2);
}
