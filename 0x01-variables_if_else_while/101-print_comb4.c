#include <stdio.h>

/**
 * main - This program prints all possible combinations of
 * three digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, k; /*counters*/

	for (i = 0; i < 10; i++)
	{
		for (j = i; j < 10; j++)
		{
			for (k = j; k < 10; k++)
			{
				if (i != j && j != k && i != k)
				{
					putchar(i);
					putchar(j);
					putchar(k);
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	return (0);
}
