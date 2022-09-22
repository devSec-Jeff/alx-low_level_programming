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
		printf("%d, ", a[n - 1]);
		n--;
	}
	printf("\n");
}
