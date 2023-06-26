#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point of the program
 *
 * Return: 0 on success
 */
#define PASSWORD_LENGTH 7

int main(void)
{
	char password[PASSWORD_LENGTH + 1];

	srand(time(NULL));

	for (int i = 0; i < PASSWORD_LENGTH; i++)
	{
		password[i] = '!' + rand() % ('~' - '!');
	}

	password[PASSWORD_LENGTH] = '\0';

	printf("%s\n", password);

	return (0);
}
