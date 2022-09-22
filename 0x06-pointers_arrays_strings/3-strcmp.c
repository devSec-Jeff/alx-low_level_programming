#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: integer value
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1)
	{
		/*
		 * if characters differ, or end of
		 * the second string is reached
		 */
		if (*s1 != *s2)
		{
			break;
		}
		/*
		 * move to the next pair of
		 * characters
		 */
		s1++;
		s2++;
	}
	/*
	 * return the ASCII difference after converting
	 * 'char*' to 'unsigned char*'
	 */
	return (*(unsigned char)*s1 - *(unsigned char)*s2);
}
