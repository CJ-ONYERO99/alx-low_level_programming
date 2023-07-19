#include <stdio.h>

/**
 * print_name - prints a name using a function pointer
 * @name: name of the person
 * @f: pointer to the function used to print the name
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
