#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_char - Print a char.
 * @list: A va_list pointing to the argument.
 */
void print_char(va_list list)
{
	printf("%c", va_arg(list, int));
}

/**
 * print_integer - Print an integer.
 * @list: A va_list pointing to the argument.
 */
void print_integer(va_list list)
{
	printf("%d", va_arg(list, int));
}

/**
 * print_float - Print a float.
 * @list: A va_list pointing to the argument.
 */
void print_float(va_list list)
{
	printf("%f", va_arg(list, double));
}

/**
 * print_string - Print a string.
 * @list: A va_list pointing to the argument.
 */
void print_string(va_list list)
{
	char *str = va_arg(list, char *);

	if (str)
		printf("%s", str);
	else
		printf("(nil)");
}

/**
 * print_all - Prints anything.
 * @format: A list of types of arguments passed to the function.
 *          c: char
 *          i: integer
 *          f: float
 *          s: char* (if the string is NULL, print (nil) instead)
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *separator = "";

	va_start(args, format);

	while (format && format[i])
	{
		switch (format[i])
		{
		case 'c':
			printf("%s", separator);
			print_char(args);
			break;
		case 'i':
			printf("%s", separator);
			print_integer(args);
			break;
		case 'f':
			printf("%s", separator);
			print_float(args);
			break;
		case 's':
			printf("%s", separator);
			print_string(args);
			break;
		}
		separator = ", ";
		i++;
	}

	va_end(args);

	printf("\n");
}
