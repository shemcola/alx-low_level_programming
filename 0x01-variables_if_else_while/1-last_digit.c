#include <stdio.h>

#include <stdlib.h>

#include <time.h>


/**
 * main - Prints subsequent text according to numbers
 * Return: Always (Success)
 *
 */

int main(void)

{

	int n, lastd;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastd = n % 10;

	if (lastd > 5)
	{
		printf("last number of %d is %d and is also greater than 5\n", n, lastd);
	}
	else if (lastd == 0)
	{
		printf("last number of %d is %d and is also a 0\n", n, lastd);
	}
	else if (lastd < 6 && lastd != 0)
	{
		printf("last number of %d is %d and is also less than 6 and not 0\n", n, lastd);
	}
	return (0);


}
