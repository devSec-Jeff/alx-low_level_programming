#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string pointer
 * @c: character to be located in the string
 * Return: a pointer to the first occurence of c
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		else
		{
			return (NULL);
		}
	}
}
