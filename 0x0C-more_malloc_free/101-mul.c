#include <stdio.h>
#include <stdlib.h>

/**
 * error_exit - Prints error message and exits with status 98
 */
void error_exit(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * check_digit - Checks if a string contains only digits
 * @str: The string to check
 */
void check_digit(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			error_exit();
		i++;
	}
}

/**
 * multiply - Multiplies two positive numbers
 * @num1: The first number
 * @num2: The second number
 */
void multiply(char *num1, char *num2)
{
	int len1 = 0, len2 = 0, len_result, i, j, carry, n1, n2, sum;
	int *result;

	while (num1[len1])
		len1++;
	while (num2[len2])
		len2++;

	len_result = len1 + len2;
	result = calloc(len_result, sizeof(int));
	if (result == NULL)
		error_exit();

	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		n1 = num1[i] - '0';

		for (j = len2 - 1; j >= 0; j--)
		{
			n2 = num2[j] - '0';
			sum = n1 * n2 + result[i + j + 1] + carry;
			result[i + j + 1] = sum % 10;
			carry = sum / 10;
		}

		if (carry)
			result[i + j + 1] += carry;
	}

	i = 0;
	while (result[i] == 0 && i < len_result - 1)
		i++;

	while (i < len_result)
		printf("%d", result[i++]);
	printf("\n");

	free(result);
}

/**
 * main - Entry point
 * @argc: The argument count
 * @argv: The argument vector
 *
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	if (argc != 3)
		error_exit();

	check_digit(argv[1]);
	check_digit(argv[2]);

	multiply(argv[1], argv[2]);

	return (0);
}
