#include "main.h"

/**
 * _strlen - function returning lenght of a string
 * @s: character string
 * Return: length of a string (int)
 */
int _strlen(char *s)
{
	int len;

	for (; *s != '\0'; s++)
		len++
	return (len);
}
