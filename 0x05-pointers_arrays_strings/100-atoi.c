#include "main.h"
#include <limits.h>

/**
 * _atoi - Converts a string to an integer.
 * @s: The input string.
 *
 * Return: The converted integer.
 */
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int i = 0;

	if (s[0] == '-')
	{
		sign = -1;
		i++;
	}

	for (; s[i] != '\0'; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			int digit = s[i] - '0';

			if (sign == 1 && (result > INT_MAX / 10 ||
						(result == INT_MAX / 10 && digit > INT_MAX % 10)))
				return (INT_MAX);
			else if (sign == -1 && (result > INT_MAX / 10 ||
						(result == INT_MAX / 10 && digit > -(INT_MIN % 10))))
				return (INT_MIN);

			result = (result * 10) + digit;
		}
		else
		{
			break;
		}
	}

	return (sign * result);
}
