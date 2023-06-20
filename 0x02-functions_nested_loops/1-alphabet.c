#include "main.h"
/**
 * print_alphabet - prints alphabets
 * _putchar - Custom putchar function
 * @c: The character to be printed
 * Return: returns 0 (success)
 */
int _putchar(char c);
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}

	_putchar('\n');
}
/**
* main - Entry point
* Return: returns 0 (success)
*/
int main(void)
{
	print_alphabet();
	return (0);
}
/**
 * _putchar - Custom putchar function
 * @c: The character to be printed
 *
 * Return: returns 0 (success)
 */
int _putchar(char c)
{
	return (_putchar(c));
}
