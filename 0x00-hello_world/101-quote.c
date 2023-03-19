#include <unistd.h>
/**
 * main - 101-quote.c
 * C program that prints message
 * Return: Always 0
 */
int main(void)
{
	write(2,
		"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
		59);
	return (1);
}
