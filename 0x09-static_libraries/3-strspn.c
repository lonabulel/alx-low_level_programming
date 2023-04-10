#include "main.h"
/**
 * _strspn - gets the lenght of a prefix substring
 * @s: Initial segment
 * @accept: substring to be checked for
 * Return: Lenght of the prefix substring
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;
	int i = 0;
	int j = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				length++;
		}
	}
	return (length);
}
