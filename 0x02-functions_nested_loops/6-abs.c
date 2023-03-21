#include "main.h"

/**
 * _abs - calculates the value of an interger
 * @c: the Number to be calculated
 * Return: value or zero
 */
int _abs(int c)

{
	if (c < 0)
	{
	int abs_val;

	abs_val = c * -1;
	return (abs_val);
	}
	return (c);
}
