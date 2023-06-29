/**
 * leet - Encodes a string into "1337".
 * @str: The string to encode.
 *
 * Return: Pointer to the encoded string.
 */
char *leet(char *str)
{
	int i, j;
	char leet_letters[] = "aAeEoOtTlL";
	char leet_digits[] = "4433007711";

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (leet_letters[j] != '\0')
		{
			if (str[i] == leet_letters[j])
				str[i] = leet_digits[j];
			j++;
		}
		i++;
	}

	return (str);
}
