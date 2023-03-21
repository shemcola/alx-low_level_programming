#include "main.h"

/**
 *  _isalpha - looks for alphabetic characters
 *  @c: The characters to be checked
 *  Return: 1 for lowercase or 0 for else
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	return (0);
}

