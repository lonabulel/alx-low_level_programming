#include "main.h"
/**
 * _strncat - concatenate two strings with at most n bytes from second string
 * @dest: First string to be concatenated
 * @src: second string to be concatenated
 * @n: amount of bytes from src
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;

	for (j = 0; j <= (n - 1); j++)
		dest[i + j] = src[j];

	return (dest);
}
