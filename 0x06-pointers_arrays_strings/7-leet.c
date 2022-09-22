#include "main.h"

/**
 * leet - function that encodes a string into
 * 1337
 * Letters a and A be replaced by 4
 * Letters e and E be replaced by 3
 * Letters o and O be replaced by 0
 * Letters t and T be replaced by 7
 * Letters l and L be replaced by 1
 * @s: character string
 * Return: nothing
 */
char *leet(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == 'a' || s[i] == 'A')
		{
			s[i] = '4';
		}
		else if (s[i] == 'e' || s[i] == 'E')
		{
			s[i] = '3';
		}
		else if (s[i] == 'o' || s[i] == 'O')
		{
			s[i] = '0';
		}
		else if (s[i] == 't' || s[i] == 'T')
		{
			s[i] = '7';
		}
		else if (s[i] == 'l' || s[i] == 'L')
		{
			s[i] = '1';
		}
		else
		{
			continue;
		}
	}
	return (s);
}
