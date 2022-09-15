#include "main.h"
#include <stdio.h>

/**
 * positive_or_negative - prints if an intger is positive or
 * negative
 * @i: integer parameter
 * Return: 0
 */
void positive_or_negative(int i)
{
	int num = i;

	if (num < 0)
	{
		printf("%d, is negative\n", num);
	}
	else if (num > 0)
	{
		printf("%d, is positive\n", num);
	}
	else
		printf("%d, is zero\n", num);

}

