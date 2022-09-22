#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: character string
 * Return: character string
 */
char *cap_string(char *s)
{
	int i;
	char spc = " ", ffd = "\t", nwl = "\n",
	     scl = ";", stp = ".", com = ",",
	     qtn = "?", xcl = "!", qot = "\"",
	     opr = "(", cpr = ")", obr = "{",
	     cbr = "}";

	/*
	 * capitalize the first word
	 */
	s[0] = s[0] - 32;

	/*
	 * loop throught the entire string and
	 * capitalize words
	 */
	i = 0;
	while (s[i] != '\0')
	{
		/*
		 * check for separators
		 */
		if (s[i] == spc || s[i] == ffd || s[i] == nwl || s[i] == scl || s[i] == stp || s[i] == com || s[i] == qtn || s[i] == xcl || s[i] == qot || s[i] == opr || s[i] == cpr || s[i] == obr || s[i] == cbr)
		{
			/*
			 * capitalize the following
			 * word
			 */
			s[i + 1] -= 32;
		}
		i++;
	}
	return (s);
}
