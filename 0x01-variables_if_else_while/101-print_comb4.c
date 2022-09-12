#include <stdio.h>

/**
 * main - This program prints all possible combinations of
 * three digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, b, c, d, e, f;
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
					b = (i % 10) + '0';
					c = (j / 10) + '0';
					d = (j % 10) + '0';
					e = (k / 10) + '0';
					f = (k % 10) + '0';
					putchar(a);
					putchar(b);
					putchar(c);
					putchar(d);
					putchar(e);
					putchar(f);
				}
			}
		}
	}
	return (0);
}
