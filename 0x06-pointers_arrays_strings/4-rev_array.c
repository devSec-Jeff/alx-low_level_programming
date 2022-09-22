#include "main.h"

/**
 * reverse_array - reverses the contents of an array
 * @a: array of integers
 * @n: number of elements of the array
 * Return: Nothing
 */
void reverse_array(int *a, int n)
{
	int i;

	i = n - 1;
	while (i >= 0)
	{
		_putchar(a[i]);
		if (i != 0)
		{
			_putchar(",");
		}
		n--;
	}
}
