#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *main - assign a random number to the variable n each time it is executed
 *Return: Always 0 (Sucess)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("Last digit of %i is %i and is ", n, (n % 10));

	if ((n % 10) == 0)
	{
		printf("0\n");
	}
	else if ((n % 10) > 5)
	{
		printf("greater than 5\n");
	}
	else 
	{
		printf("less than 6 and 0\n");
	}

	return (0);
}		
