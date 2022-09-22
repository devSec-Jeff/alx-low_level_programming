#include "main.h"

/**
 * reverse_array - reverses the contents of an array
 * @a: array of integers
 * @n: number of elements of the array
 * Return: Nothing
 */
void reverse_array(int *a, int n)
{
	while (n > 0)
	{
		_putchar(a[n - 1]);
		n--;
	}
	_putchar("\n");
}
