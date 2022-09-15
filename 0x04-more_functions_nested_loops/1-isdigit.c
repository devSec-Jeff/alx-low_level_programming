#include "main.h"

/**
 * _isdigit - function checks for a digit (0 through 9)
 * @c: character param
 * Return: 1 (If digit) or 0 (If otherwise)
 */

int _isdigit(int c)
{
	if (isdigit(c) == 1)
	{
		return (1);
	}
	return (0);
}
