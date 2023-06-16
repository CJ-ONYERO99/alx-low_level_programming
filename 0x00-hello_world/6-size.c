#include <stdio.h>
/*
 * main- a program that prints the size of various types in c
 */
int main(void)
{
printf("The size of a char is: %d byte(s)\n", sizeof(char));
printf("The size of an int is: %d byte(s)\n", sizeof(int));
printf("The size of long int is: %d byte(s)\n", sizeof(long int));
printf("The size of a long long int is: %d byte(s)\n", sizeof(long long int));
printf("The size of a float is: %d byte(s)\n", sizeof(float));
return (0);
}
