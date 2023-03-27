#include "main.h"
/**
 * _strlen - prints the lenght of a string
 *
 * @s: string inputted
 * Return: the lenght of 's'
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}
