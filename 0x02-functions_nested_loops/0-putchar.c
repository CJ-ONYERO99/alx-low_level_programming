#include <unistd.h>
/**
* main - Entry point of the program
*
* Return: Always 0(Success)
*/
int main(void)
{
	char str[] = "_putchar\n";
	int length = sizeof(str) - 1;

	write(1, str, length);

	return (0);

}
