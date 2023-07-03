#include <stddef.h>

/**
 * _strstr - Locates the first occurrence of a substring in a string.
 * @haystack: The string to search in.
 * @needle: The substring to search for.
 *
 * Return: Pointer to the beginning of the located substring,
 *         or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *p1, *p2;

	if (*needle == '\0')
		return (haystack);

	while (*haystack != '\0')
	{
		p1 = haystack;
		p2 = needle;

		while (*p2 != '\0' && *p1 == *p2)
		{
			p1++;
			p2++;
		}

		if (*p2 == '\0')
			return (haystack);

		haystack++;
	}

	return (NULL);
}
