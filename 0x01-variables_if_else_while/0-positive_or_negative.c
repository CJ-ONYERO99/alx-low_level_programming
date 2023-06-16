#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Entry point
*
* return: returns 0(success)
*
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	

	printf("The number is %d\n", n);

	if (n > 0) 
	{
        	printf("7is positive\n");

	}
	else if (n == 0) {
        	printf("is zero\n");
    	}
    	else {
        	printf("is negative\n");
    	}


	return (0);
}
