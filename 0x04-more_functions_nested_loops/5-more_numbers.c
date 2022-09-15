#include "main.h"

/**
 * more_numbers - print numbers 0 to 14 ten times
 * Return: Always 0
 */

void more_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		int num = 0;

		while (num <= 14)
		{
			_putchar(i + '0');
			num++;
		}
		i++;
		_putchar('\n');
	}
}
