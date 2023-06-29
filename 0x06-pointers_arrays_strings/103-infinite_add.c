#include "main.h"

/**
 * rev_string - Reverse a string
 * @str: String to reverse
 */
void rev_string(char *str)
{
	int len = 0, i = 0;
	char temp;

	while (str[len] != '\0')
		len++;

	len--;

	for (i = 0; i < len; i++, len--)
	{
		temp = str[i];
		str[i] = str[len];
		str[len] = temp;
	}
}

/**
 * add_digit - Add two digits with overflow
 * @d1: First digit
 * @d2: Second digit
 * @overflow: Pointer to overflow value
 * Return: Resulting digit
 */
int add_digit(int d1, int d2, int *overflow)
{
	int sum = d1 + d2 + *overflow;

	if (sum >= 10)
	{
		*overflow = 1;
		return (sum - 10);
	}

	*overflow = 0;
	return (sum);
}

/**
 * infinite_add - Add two numbers represented as strings
 * @n1: First number
 * @n2: Second number
 * @r: Buffer to store the result
 * @size_r: Size of the buffer
 * Return: Pointer to the result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int overflow = 0;
	int i = 0, j = 0, digits = 0;
	int val1 = 0, val2 = 0, temp_sum = 0;

	while (n1[i] != '\0')
		i++;

	while (n2[j] != '\0')
		j++;

	i--;
	j--;

	if (j >= size_r || i >= size_r)
		return (0);

	while (j >= 0 || i >= 0 || overflow == 1)
	{
		val1 = (i >= 0) ? (n1[i] - '0') : 0;
		val2 = (j >= 0) ? (n2[j] - '0') : 0;

		temp_sum = add_digit(val1, val2, &overflow);

		if (digits >= (size_r - 1))
			return (0);

		r[digits] = temp_sum + '0';
		digits++;
		j--;
		i--;
	}

	if (digits == size_r)
		return (0);

	r[digits] = '\0';
	rev_string(r);

	return (r);
}
