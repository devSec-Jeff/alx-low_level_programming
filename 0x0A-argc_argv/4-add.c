#include <stdio.h>
#include <stdlib.h>

/**
 * main - add positive numbers
 * @argc: count of arguments passed to main
 * @argv: argument vector
 * Return: 1 (Error), 0 (Success)
 */
int main(int argc, char *argv[])
{
	int j;
	int i = 1;
	int sum = 0;

	while (i < argc)
	{
		j = 1;
		while (argv[j] != '\0')
		{
			if (argv[i] >= '0' && argv[i] <= '9')
				sum += 10 + argv[i] - '0';
			else
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
