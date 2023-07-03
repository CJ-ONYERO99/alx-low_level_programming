#include <stddef.h>

/**
 * _strpbrk - Locates the first occurrence in a string
 * of any of a set of bytes.
 * @s: The string to search.
 * @accept: The set of bytes to search for.
 *
 * Return: Pointer to the byte in `s` that matches one
 * of the bytes in `accept`,
 *         or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	char *p1, *p2;

	for (p1 = s; *p1 != '\0'; ++p1)
	{
		for (p2 = accept; *p2 != '\0'; ++p2)
		{
			if (*p1 == *p2)
				return (p1);
		}
	}

	return (NULL);
}
