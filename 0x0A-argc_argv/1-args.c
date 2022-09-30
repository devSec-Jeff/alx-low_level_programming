#include <stdio.h>

/**
 * main - print the number of args passed to it
 * @argc: the count of args
 * @argv: the argument vector
 * Return: Always 0
 */
int main(int argc, char __attribute__ ((unused)) *argv[])
{
	int i, total;

	for (i = 0; i < argc; i++)
	{
		total += i;
	}
	printf("%d\n", total);
	return (0);
}
