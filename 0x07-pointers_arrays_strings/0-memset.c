#include "main.h"

/**
 * _memset - fills the first n bytes of the memory area
 * pointed by s with the constant byte b
 * @s: char pointer
 * @b: constant byte
 * @n: integer
 * Return: char pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
