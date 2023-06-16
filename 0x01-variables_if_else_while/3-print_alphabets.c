#include <stdio.h>

/**
 * main - Entry point of program
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char ch = 'a';
	char CH = 'A';

	/prints a - z/
	while (ch <= 'z')
	{
		putchar(ch);
		++ch;
	}

	while (CH <= 'Z')
	{
		putchar(CH);
		++CH;
	}
	putchar('\n');

	return (0);
}
