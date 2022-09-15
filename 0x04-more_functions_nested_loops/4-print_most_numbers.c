#include "main.h"

/**
 * print_most_numbers - prints numbers from 0 to 9
 * followed by new line
 * but do not print 2 and 4
 * Return: Always 0
 */

void print_most_numbers(void)
{
	for (int i = 0; i < 10; i++)
	{
		if (i != 2 && i != 4)
		{
			_putchar(1 + '0');
		}
		continue;
	}
	putchar('\n');
}
