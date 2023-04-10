#include "main.h"
/**
 * _strcat - Concatenates two strings
 * @dest: one of the string to be concatenated
 * @src: the other string to be concatenated
 * Return: Nothing
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;

	int j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] !=  '\0')
	{
		dest[i + j] = src[j];
		j++;
	}

	dest[i + j + 1] = '\0';

	return (dest);
}
