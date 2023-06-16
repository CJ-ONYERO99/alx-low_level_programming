#include <unistd.h>
#include <string.h>
/*
* main - program start
*/
int main(void)
{
	char msg[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(2, msg, strlen(msg));
	return (1);
}
