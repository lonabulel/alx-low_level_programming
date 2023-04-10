#include "main.h"
/**
 * _strncpy - copies a string pointed by src into dest with at most n bytes
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to be copied
 * Return: dest; the destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '0' && i < n; i++)
		dest[i] = src[i];

	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
