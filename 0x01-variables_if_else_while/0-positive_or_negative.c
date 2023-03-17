#include <stdio.h>

#include <time.h>

#include <stdlib.h>

/**
 * main - The program prints numbers that are  positive
 * if negative
 * and if it is zero
 * Return: Always (Success)
 *
*/

int main(void)

{

	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);

}

