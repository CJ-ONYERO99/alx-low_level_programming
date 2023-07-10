#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of the program.
 * @ac: The argument count.
 * @av: The argument vector.
 *
 * Return: A pointer to a new string containing the concatenated arguments,
 *         or NULL if ac is 0 or av is NULL, or if it fails.
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int total_length = 0, arg_length, i, k = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		arg_length = 0;
		while (av[i][arg_length] != '\0')
		{
			arg_length++;
			total_length++;
		}
		total_length++;
	}

	str = malloc((total_length + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		arg_length = 0;
		while (av[i][arg_length] != '\0')
		{
			str[k] = av[i][arg_length];
			arg_length++;
			k++;
		}
		str[k] = '\n';
		k++;
	}

	str[k] = '\0';

	return (str);
}
