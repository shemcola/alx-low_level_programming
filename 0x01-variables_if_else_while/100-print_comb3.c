#include <stdio.h>
/**
 * main - main function
 *
 * Return: always 0
 */
int main(void)
{
	int j;
	int i;

	for (i == 0; i < 10; i++)
	{
		for (j = 1; j < 10; j++)
		{
			if (i < j && i != j)
			{
				putchar(i + '0');
				putchar(i + '0');
				puthar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
