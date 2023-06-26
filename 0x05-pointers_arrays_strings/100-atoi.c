#include "main.h"

/**
 * puts_half - Prints half of a string.
 * @str: The input string.
 */
void puts_half(char *str)
{
	int a, n, longi;

	longi = 0;
	for (a = 0; str[a] != '\0'; a++)
		longi++;

	n = (longi / 2);
	if ((longi % 2) == 1)
		n = ((longi + 1) / 2);

	for (a = n; str[a] != '\0'; a++)
		_putchar(str[a]);

	_putchar('\n');
}

/**
 * _putchar - Writes a character to stdout.
 * @c: The character to write.
 *
 * Return: On success, returns the character written.
 * On error, returns -1 and sets errno.
 */
int _putchar(char c)
{
	return (putchar(c));
}

/**
 * print_array - Prints n elements of an array.
 * @a: The array to print.
 * @n: The number of elements to print.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d, ", a[i]);
	}

	if (i == (n - 1))
	{
		printf("%d", a[n - 1]);
	}

	printf("\n");
}

/**
 * _strcpy - Copies the string pointed to by src to dest.
 * @dest: The destination buffer.
 * @src: The source string.
 *
 * Return: The pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int x = 0;

	while (*(src + l) != '\0')
	{
		l++;
	}

	for (; x < l; x++)
	{
		dest[x] = src[x];
	}

	dest[l] = '\0';

	return (dest);
}

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to be converted.
 *
 * Return: The integer converted from the string.
 */
int _atoi(char *s)
{
	int i, d, n, len, f, digit;

	i = 0;
	d = 0;
	n = 0;
	len = 0;
	f = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (i < len && f == 0)
	{
		if (s[i] == '-')
			++d;

		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';

			if (d % 2)
				digit = -digit;

			n = n * 10 + digit;
			f = 1;

			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;

			f = 0;
		}

		i++;
	}

	if (f == 0)
		return (0);

	return (n);
}
