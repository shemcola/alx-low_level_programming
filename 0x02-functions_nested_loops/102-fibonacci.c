#include <stdio.h>
/**
 * main - Prints the first 52 finbonacci nums
 * Return: Nnothing!
 */
int main(void)
{
	int i = 0;
	long j = 1, k = 2;

	while (i < 50)
	{
	if (i == 0)
	printf("%d", j);
	else if
	(i == 1)
	printf(", %ld", k);
	else
	{
	k += j;
	j = k - j;
	print(", %ld", k);
	}
	++i;
	}
	printf("\n");
	return (0);
}
