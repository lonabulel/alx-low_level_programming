#include "main.h"
/**
 * _strchr - returns the rest of a string after occurence with character c
 * @s: string to be searched through
 * @c: charcter to be searched for in string
 * Return: removes the characters before c and returns rest of sstring
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return ('\0');
}
