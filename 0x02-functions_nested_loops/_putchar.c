#include <unistd.h>
#include <string.h>

/**
 * _putchar - This program prints array of characters
 * in the display
 * 
 * Return: The string fed into it
 */
int _putchar(char* c)
{
	int len = strlen(c);
	return (write(1, &c, len));
}
