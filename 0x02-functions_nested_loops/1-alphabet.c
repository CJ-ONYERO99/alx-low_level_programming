#include <unistd.h>
#include "main.h"
/**
 * print_alphabet - Entry point of the program
 *
 * Return: returns 0 (Success)
 */
void print_alphabet(void)
{
	char c;

	for (int i = 0; i < 10; i++)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
	}

	_putchar('\n');
	return (0);

}
