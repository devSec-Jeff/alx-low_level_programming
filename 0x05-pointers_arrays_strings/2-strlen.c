#include "main.h"

/**
 * _strlen - function returning lenght of a string
 * @s: character string
 * Return: length of a string (int)
 */
int _strlen(char *s)
{
	int len;

	for (int i = 0; *(s + i) != '\0'; i++)
		len++;
	return (len);
}
