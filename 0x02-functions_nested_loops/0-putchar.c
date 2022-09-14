#include <unistd.h>
#include "main.h"

/**
 * main - This program prints string on the
 * display
 * Return: Always 0 (Success)
 */
int main(void)
{
	write(1, "_putchar\n", 9);
	return (0);
}
