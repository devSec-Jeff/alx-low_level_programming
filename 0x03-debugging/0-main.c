#include "main.h"
#include <stdio.h>
/**
 * positive_or_negative - prints if an intger is positive or
 * negative
 * @i - integer parameter
 * Return: 0
 */
void positive_or_negative(int i)
{
	if (i < 0 )
	{
		printf("%d, is negative", i);
	}
	else if (i > 0)
	{
		printf("%d, is positive", i);
	}
	else
		printf("%d, is zero", i);
}
