#include "main.h"
/**
 * _memset - Fills the first n bytes of memory pointed by s with a constant
 * @s: String to be filled by character b
 * @b: character to be filled in string s
 * @n: number of bytes to be filled
 * Return: Pointer to the string s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
