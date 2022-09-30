#include <stdio.h>

/**
 * main - prints the program name followed by a new line
 * if you rename the program, it willl print the new name without
 * having to compile again
 * @argc: Count the number of arguments passed
 * @argv: The argument vector
 *
 * Return: Always 0.
 */
int main(int __attribute__ ((unused)) argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
