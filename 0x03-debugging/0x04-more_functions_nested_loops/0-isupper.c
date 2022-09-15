#include "main.h"

/**
 * _isupper - this function chacks for uppercase character
 * @c: character value
 * Return: 1 (If uppercase) and 0 (If otherwize
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
