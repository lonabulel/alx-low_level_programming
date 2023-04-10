#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: string 1
 * @s2: string 2
 * Return: 0 if equal, positive value if greater, else negative
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int r;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] == s2[i])
		{
			r = 0;
			i++;
		}
	}

	return (r);
}

