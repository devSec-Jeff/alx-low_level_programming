#include <stdio.h>

/**
 * main - This program prints all possible combinations of
 * three digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, b, c;
	int i, j, k; /*counters*/

	for (i = 0; i < 10; i++)
	{
		for (j = i; j < 10; j++)
		{
			for (k = j; k < 10; k++)
			{
				if (i != j && j != k && i != k)
				{
					a = (i / 10) + '0';
					b = (j / 10) + '0';
					c = (k / 10) + '0';
					putchar(a);
					putchar(b);
					putchar(c);
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	return (0);
}
