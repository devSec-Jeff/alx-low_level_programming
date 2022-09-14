#include "main.h"

/**
 * main - This program prints string on the
 * display
 * Return: Always 0 (Success)
 */
int main(void)
{
	char mychar[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
		_putchar(mychar[i]);
	_putchar('\n');

	return (0);
}
