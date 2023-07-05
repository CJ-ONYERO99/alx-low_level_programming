#include "main.h"

/**
 * _puts_recursion - Prints a string followed by a new line.
 * @s: The string to be printed.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n'); /* Assuming you have a _putchar function available */
		return;
	}

	_putchar(*s);
	_puts_recursion(s + 1);
}
